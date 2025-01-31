/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jblas_NativeBlas */

#ifndef _Included_org_jblas_NativeBlas
#define _Included_org_jblas_NativeBlas
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jblas_NativeBlas
 * Method:    ccopy
 * Signature: (I[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_ccopy
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dcopy
 * Signature: (I[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dcopy
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    scopy
 * Signature: (I[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_scopy
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zcopy
 * Signature: (I[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zcopy
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cswap
 * Signature: (I[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cswap
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dswap
 * Signature: (I[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dswap
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sswap
 * Signature: (I[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_sswap
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zswap
 * Signature: (I[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zswap
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    caxpy
 * Signature: (ILorg/jblas/ComplexFloat;[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_caxpy
  (JNIEnv *, jclass, jint, jobject, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    daxpy
 * Signature: (ID[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_daxpy
  (JNIEnv *, jclass, jint, jdouble, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    saxpy
 * Signature: (IF[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_saxpy
  (JNIEnv *, jclass, jint, jfloat, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zaxpy
 * Signature: (ILorg/jblas/ComplexDouble;[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zaxpy
  (JNIEnv *, jclass, jint, jobject, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cscal
 * Signature: (ILorg/jblas/ComplexFloat;[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cscal
  (JNIEnv *, jclass, jint, jobject, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dscal
 * Signature: (ID[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dscal
  (JNIEnv *, jclass, jint, jdouble, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sscal
 * Signature: (IF[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_sscal
  (JNIEnv *, jclass, jint, jfloat, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zscal
 * Signature: (ILorg/jblas/ComplexDouble;[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zscal
  (JNIEnv *, jclass, jint, jobject, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    csscal
 * Signature: (IF[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_csscal
  (JNIEnv *, jclass, jint, jfloat, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zdscal
 * Signature: (ID[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zdscal
  (JNIEnv *, jclass, jint, jdouble, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cdotc
 * Signature: (I[FII[FII)Lorg/jblas/ComplexFloat;
 */
JNIEXPORT jobject JNICALL Java_org_jblas_NativeBlas_cdotc
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cdotu
 * Signature: (I[FII[FII)Lorg/jblas/ComplexFloat;
 */
JNIEXPORT jobject JNICALL Java_org_jblas_NativeBlas_cdotu
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ddot
 * Signature: (I[DII[DII)D
 */
JNIEXPORT jdouble JNICALL Java_org_jblas_NativeBlas_ddot
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sdot
 * Signature: (I[FII[FII)F
 */
JNIEXPORT jfloat JNICALL Java_org_jblas_NativeBlas_sdot
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zdotc
 * Signature: (I[DII[DII)Lorg/jblas/ComplexDouble;
 */
JNIEXPORT jobject JNICALL Java_org_jblas_NativeBlas_zdotc
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zdotu
 * Signature: (I[DII[DII)Lorg/jblas/ComplexDouble;
 */
JNIEXPORT jobject JNICALL Java_org_jblas_NativeBlas_zdotu
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dnrm2
 * Signature: (I[DII)D
 */
JNIEXPORT jdouble JNICALL Java_org_jblas_NativeBlas_dnrm2
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dznrm2
 * Signature: (I[DII)D
 */
JNIEXPORT jdouble JNICALL Java_org_jblas_NativeBlas_dznrm2
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    scnrm2
 * Signature: (I[FII)F
 */
JNIEXPORT jfloat JNICALL Java_org_jblas_NativeBlas_scnrm2
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    snrm2
 * Signature: (I[FII)F
 */
JNIEXPORT jfloat JNICALL Java_org_jblas_NativeBlas_snrm2
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dasum
 * Signature: (I[DII)D
 */
JNIEXPORT jdouble JNICALL Java_org_jblas_NativeBlas_dasum
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dzasum
 * Signature: (I[DII)D
 */
JNIEXPORT jdouble JNICALL Java_org_jblas_NativeBlas_dzasum
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sasum
 * Signature: (I[FII)F
 */
JNIEXPORT jfloat JNICALL Java_org_jblas_NativeBlas_sasum
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    scasum
 * Signature: (I[FII)F
 */
JNIEXPORT jfloat JNICALL Java_org_jblas_NativeBlas_scasum
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    icamax
 * Signature: (I[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_icamax
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    idamax
 * Signature: (I[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_idamax
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    isamax
 * Signature: (I[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_isamax
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    izamax
 * Signature: (I[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_izamax
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgemv
 * Signature: (CIILorg/jblas/ComplexFloat;[FII[FIILorg/jblas/ComplexFloat;[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cgemv
  (JNIEnv *, jclass, jchar, jint, jint, jobject, jfloatArray, jint, jint, jfloatArray, jint, jint, jobject, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgemv
 * Signature: (CIID[DII[DIID[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dgemv
  (JNIEnv *, jclass, jchar, jint, jint, jdouble, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdouble, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgemv
 * Signature: (CIIF[FII[FIIF[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_sgemv
  (JNIEnv *, jclass, jchar, jint, jint, jfloat, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloat, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgemv
 * Signature: (CIILorg/jblas/ComplexDouble;[DII[DIILorg/jblas/ComplexDouble;[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zgemv
  (JNIEnv *, jclass, jchar, jint, jint, jobject, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jobject, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgerc
 * Signature: (IILorg/jblas/ComplexFloat;[FII[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cgerc
  (JNIEnv *, jclass, jint, jint, jobject, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgeru
 * Signature: (IILorg/jblas/ComplexFloat;[FII[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cgeru
  (JNIEnv *, jclass, jint, jint, jobject, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dger
 * Signature: (IID[DII[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dger
  (JNIEnv *, jclass, jint, jint, jdouble, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sger
 * Signature: (IIF[FII[FII[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_sger
  (JNIEnv *, jclass, jint, jint, jfloat, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgerc
 * Signature: (IILorg/jblas/ComplexDouble;[DII[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zgerc
  (JNIEnv *, jclass, jint, jint, jobject, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgeru
 * Signature: (IILorg/jblas/ComplexDouble;[DII[DII[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zgeru
  (JNIEnv *, jclass, jint, jint, jobject, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgemm
 * Signature: (CCIIILorg/jblas/ComplexFloat;[FII[FIILorg/jblas/ComplexFloat;[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_cgemm
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jobject, jfloatArray, jint, jint, jfloatArray, jint, jint, jobject, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgemm
 * Signature: (CCIIID[DII[DIID[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dgemm
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jdouble, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdouble, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgemm
 * Signature: (CCIIIF[FII[FIIF[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_sgemm
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jfloat, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloat, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgemm
 * Signature: (CCIIILorg/jblas/ComplexDouble;[DII[DIILorg/jblas/ComplexDouble;[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zgemm
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jobject, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jobject, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    csyrk
 * Signature: (CCIILorg/jblas/ComplexFloat;[FIILorg/jblas/ComplexFloat;[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_csyrk
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jobject, jfloatArray, jint, jint, jobject, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsyrk
 * Signature: (CCIID[DIID[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dsyrk
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jdouble, jdoubleArray, jint, jint, jdouble, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssyrk
 * Signature: (CCIIF[FIIF[FII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_ssyrk
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jfloat, jfloatArray, jint, jint, jfloat, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zsyrk
 * Signature: (CCIILorg/jblas/ComplexDouble;[DIILorg/jblas/ComplexDouble;[DII)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zsyrk
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jobject, jdoubleArray, jint, jint, jobject, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    claswp
 * Signature: (I[FIIII[III)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_claswp
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dlaswp
 * Signature: (I[DIIII[III)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_dlaswp
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    slaswp
 * Signature: (I[FIIII[III)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_slaswp
  (JNIEnv *, jclass, jint, jfloatArray, jint, jint, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zlaswp
 * Signature: (I[DIIII[III)V
 */
JNIEXPORT void JNICALL Java_org_jblas_NativeBlas_zlaswp
  (JNIEnv *, jclass, jint, jdoubleArray, jint, jint, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    clascl
 * Signature: (CIIFFII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_clascl
  (JNIEnv *, jclass, jchar, jint, jint, jfloat, jfloat, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dlascl
 * Signature: (CIIDDII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dlascl
  (JNIEnv *, jclass, jchar, jint, jint, jdouble, jdouble, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    slascl
 * Signature: (CIIFFII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_slascl
  (JNIEnv *, jclass, jchar, jint, jint, jfloat, jfloat, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zlascl
 * Signature: (CIIDDII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_zlascl
  (JNIEnv *, jclass, jchar, jint, jint, jdouble, jdouble, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cpotri
 * Signature: (CI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_cpotri
  (JNIEnv *, jclass, jchar, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dpotri
 * Signature: (CI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dpotri
  (JNIEnv *, jclass, jchar, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    spotri
 * Signature: (CI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_spotri
  (JNIEnv *, jclass, jchar, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zpotri
 * Signature: (CI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_zpotri
  (JNIEnv *, jclass, jchar, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgesv
 * Signature: (II[DII[II[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgesv
  (JNIEnv *, jclass, jint, jint, jdoubleArray, jint, jint, jintArray, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgesv
 * Signature: (II[FII[II[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgesv
  (JNIEnv *, jclass, jint, jint, jfloatArray, jint, jint, jintArray, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsysv
 * Signature: (CII[DII[II[DII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsysv
  (JNIEnv *, jclass, jchar, jint, jint, jdoubleArray, jint, jint, jintArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssysv
 * Signature: (CII[FII[II[FII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssysv
  (JNIEnv *, jclass, jchar, jint, jint, jfloatArray, jint, jint, jintArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsyev
 * Signature: (CCI[DII[DI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsyev
  (JNIEnv *, jclass, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssyev
 * Signature: (CCI[FII[FI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssyev
  (JNIEnv *, jclass, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsyevd
 * Signature: (CCI[DII[DI[DII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsyevd
  (JNIEnv *, jclass, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsyevr
 * Signature: (CCCI[DIIDDIID[II[DI[DII[II[DII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsyevr
  (JNIEnv *, jclass, jchar, jchar, jchar, jint, jdoubleArray, jint, jint, jdouble, jdouble, jint, jint, jdouble, jintArray, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jintArray, jint, jdoubleArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsyevx
 * Signature: (CCCI[DIIDDIID[II[DI[DII[DII[II[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsyevx
  (JNIEnv *, jclass, jchar, jchar, jchar, jint, jdoubleArray, jint, jint, jdouble, jdouble, jint, jint, jdouble, jintArray, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jintArray, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssyevd
 * Signature: (CCI[FII[FI[FII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssyevd
  (JNIEnv *, jclass, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssyevr
 * Signature: (CCCI[FIIFFIIF[II[FI[FII[II[FII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssyevr
  (JNIEnv *, jclass, jchar, jchar, jchar, jint, jfloatArray, jint, jint, jfloat, jfloat, jint, jint, jfloat, jintArray, jint, jfloatArray, jint, jfloatArray, jint, jint, jintArray, jint, jfloatArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssyevx
 * Signature: (CCCI[FIIFFIIF[II[FI[FII[FII[II[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssyevx
  (JNIEnv *, jclass, jchar, jchar, jchar, jint, jfloatArray, jint, jint, jfloat, jfloat, jint, jint, jfloat, jintArray, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jintArray, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dposv
 * Signature: (CII[DII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dposv
  (JNIEnv *, jclass, jchar, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sposv
 * Signature: (CII[FII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sposv
  (JNIEnv *, jclass, jchar, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgeev
 * Signature: (CCI[FII[FI[FII[FII[FII[FI)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_cgeev
  (JNIEnv *, jclass, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgeev
 * Signature: (CCI[DII[DI[DI[DII[DII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgeev
  (JNIEnv *, jclass, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgeev
 * Signature: (CCI[FII[FI[FI[FII[FII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgeev
  (JNIEnv *, jclass, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgeev
 * Signature: (CCI[DII[DI[DII[DII[DII[DI)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_zgeev
  (JNIEnv *, jclass, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgetrf
 * Signature: (II[DII[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgetrf
  (JNIEnv *, jclass, jint, jint, jdoubleArray, jint, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgetrf
 * Signature: (II[FII[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgetrf
  (JNIEnv *, jclass, jint, jint, jfloatArray, jint, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dpotrf
 * Signature: (CI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dpotrf
  (JNIEnv *, jclass, jchar, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    spotrf
 * Signature: (CI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_spotrf
  (JNIEnv *, jclass, jchar, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    cgesvd
 * Signature: (CCII[FII[FI[FII[FII[FII[FI)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_cgesvd
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgesvd
 * Signature: (CCII[DII[DI[DII[DII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgesvd
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgesvd
 * Signature: (CCII[FII[FI[FII[FII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgesvd
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    zgesvd
 * Signature: (CCII[DII[DI[DII[DII[DII[DI)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_zgesvd
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsygvd
 * Signature: (ICCI[DII[DII[DI[DII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsygvd
  (JNIEnv *, jclass, jint, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssygvd
 * Signature: (ICCI[FII[FII[FI[FII[III)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssygvd
  (JNIEnv *, jclass, jint, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgelsd
 * Signature: (III[DII[DII[DID[II[DII[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgelsd
  (JNIEnv *, jclass, jint, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdouble, jintArray, jint, jdoubleArray, jint, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgelsd
 * Signature: (III[FII[FII[FIF[II[FII[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgelsd
  (JNIEnv *, jclass, jint, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloat, jintArray, jint, jfloatArray, jint, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ilaenv
 * Signature: (ILjava/lang/String;Ljava/lang/String;IIII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ilaenv
  (JNIEnv *, jclass, jint, jstring, jstring, jint, jint, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dgeqrf
 * Signature: (II[DII[DI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dgeqrf
  (JNIEnv *, jclass, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sgeqrf
 * Signature: (II[FII[FI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sgeqrf
  (JNIEnv *, jclass, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dormqr
 * Signature: (CCIII[DII[DI[DII[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dormqr
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sormqr
 * Signature: (CCIII[FII[FI[FII[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sormqr
  (JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dorgqr
 * Signature: (III[DII[DI[DII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dorgqr
  (JNIEnv *, jclass, jint, jint, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jdoubleArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    sorgqr
 * Signature: (III[FII[FI[FII)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_sorgqr
  (JNIEnv *, jclass, jint, jint, jint, jfloatArray, jint, jint, jfloatArray, jint, jfloatArray, jint, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    dsygvx
 * Signature: (ICCCI[DII[DIIDDIID[II[DI[DII[DII[II[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_dsygvx
  (JNIEnv *, jclass, jint, jchar, jchar, jchar, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jdouble, jdouble, jint, jint, jdouble, jintArray, jint, jdoubleArray, jint, jdoubleArray, jint, jint, jdoubleArray, jint, jint, jintArray, jint, jintArray, jint);

/*
 * Class:     org_jblas_NativeBlas
 * Method:    ssygvx
 * Signature: (ICCCI[FII[FIIFFIIF[II[FI[FII[FII[II[II)I
 */
JNIEXPORT jint JNICALL Java_org_jblas_NativeBlas_ssygvx
  (JNIEnv *, jclass, jint, jchar, jchar, jchar, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloat, jfloat, jint, jint, jfloat, jintArray, jint, jfloatArray, jint, jfloatArray, jint, jint, jfloatArray, jint, jint, jintArray, jint, jintArray, jint);

#ifdef __cplusplus
}
#endif
#endif
