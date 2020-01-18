/* This dummy file provides soft float support */
/* The purpose of this library is to measure the size of code excluding target
   dependent C library code. It only makes sense if it is used with
   -gc-sections. */

double
__floatdidf (double x __attribute__ ((unused)), double y __attribute__ ((unused)))
{
  return 0.0;
}

double
__fixdfdi (double x __attribute__ ((unused)), double y __attribute__ ((unused)))
{
  return 0.0;
}

double
__floatundidf (double x __attribute__ ((unused)), double y __attribute__ ((unused)))
{
  return 0.0;
}

