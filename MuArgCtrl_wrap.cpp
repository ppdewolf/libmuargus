/*
* Argus Open Source
* Software to apply Statistical Disclosure Control techniques
* 
* Copyright 2014 Statistics Netherlands
* 
* This program is free software; you can redistribute it and/or 
* modify it under the terms of the European Union Public Licence 
* (EUPL) version 1.1, as published by the European Commission.
* 
* You can find the text of the EUPL v1.1 on
* https://joinup.ec.europa.eu/software/page/eupl/licence-eupl
* 
* This software is distributed on an "AS IS" basis without 
* warranties or conditions of any kind, either express or implied.
*/

#define SWIGJAVA
#define SWIG_DIRECTORS


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes so that Java proxy
 * methods can be called from C++.
 * ----------------------------------------------------------------------------- */

#if defined(DEBUG_DIRECTOR_OWNED) || defined(DEBUG_DIRECTOR_EXCEPTION)
#include <iostream>
#endif

#include <exception>

namespace Swig {

  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global || !mem_own; // hold as weak global if explicitly requested or not owned
        if (jobj)
          jthis_ = weak_global_ ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj);
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    /* Only call peek if you know what you are doing wrt to weak/global references */
    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else {
	/* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.get(jenv);
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
      jenv->DeleteLocalRef(jobj);
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
    }
  };


  // Utility classes and functions for exception handling.

  // Simple holder for a Java string during exception handling, providing access to a c-style string
  class JavaString {
  public:
    JavaString(JNIEnv *jenv, jstring jstr) : jenv_(jenv), jstr_(jstr), cstr_(0) {
      if (jenv_ && jstr_)
	cstr_ = (const char *) jenv_->GetStringUTFChars(jstr_, NULL);
    }

    ~JavaString() {
      if (jenv_ && jstr_ && cstr_)
	jenv_->ReleaseStringUTFChars(jstr_, cstr_);
    }

    const char *c_str(const char *null_string = "null JavaString") const {
      return cstr_ ? cstr_ : null_string;
    }

  private:
    // non-copyable
    JavaString(const JavaString &);
    JavaString &operator=(const JavaString &);

    JNIEnv *jenv_;
    jstring jstr_;
    const char *cstr_;
  };

  // Helper class to extract the exception message from a Java throwable
  class JavaExceptionMessage {
  public:
    JavaExceptionMessage(JNIEnv *jenv, jthrowable throwable) : message_(jenv, exceptionMessageFromThrowable(jenv, throwable)) {
    }

    const char *message() const {
      return message_.c_str("Could not get exception message in JavaExceptionMessage");
    }

  private:
    // non-copyable
    JavaExceptionMessage(const JavaExceptionMessage &);
    JavaExceptionMessage &operator=(const JavaExceptionMessage &);

    // Get exception message by calling Java method Throwable.getMessage()
    static jstring exceptionMessageFromThrowable(JNIEnv *jenv, jthrowable throwable) {
      jstring jmsg = NULL;
      if (jenv && throwable) {
	jenv->ExceptionClear(); // Cannot invoke methods with any pending exceptions
	jclass throwclz = jenv->GetObjectClass(throwable);
	if (throwclz) {
	  // All Throwable classes have a getMessage() method, so call it to extract the exception message
	  jmethodID getMessageMethodID = jenv->GetMethodID(throwclz, "getMessage", "()Ljava/lang/String;");
	  if (getMessageMethodID)
	    jmsg = (jstring)jenv->CallObjectMethod(throwable, getMessageMethodID);
	}
	if (jmsg == NULL && jenv->ExceptionCheck())
	  jenv->ExceptionClear();
      }
      return jmsg;
    }

    JavaString message_;
  };

  // C++ Exception class for handling Java exceptions thrown during a director method Java upcall
  class DirectorException : public std::exception {
  public:

    // Construct exception from a Java throwable
    DirectorException(JNIEnv *jenv, jthrowable throwable) : classname_(0), msg_(0) {

      // Call Java method Object.getClass().getName() to obtain the throwable's class name (delimited by '/')
      if (throwable) {
	jclass throwclz = jenv->GetObjectClass(throwable);
	if (throwclz) {
	  jclass clzclz = jenv->GetObjectClass(throwclz);
	  if (clzclz) {
	    jmethodID getNameMethodID = jenv->GetMethodID(clzclz, "getName", "()Ljava/lang/String;");
	    if (getNameMethodID) {
	      jstring jstr_classname = (jstring)(jenv->CallObjectMethod(throwclz, getNameMethodID));
              // Copy strings, since there is no guarantee that jenv will be active when handled
              if (jstr_classname) {
                JavaString jsclassname(jenv, jstr_classname);
                const char *classname = jsclassname.c_str(0);
                if (classname)
                  classname_ = copypath(classname);
              }
	    }
	  }
	}
      }

      JavaExceptionMessage exceptionmsg(jenv, throwable);
      msg_ = copystr(exceptionmsg.message());
    }

    // More general constructor for handling as a java.lang.RuntimeException
    DirectorException(const char *msg) : classname_(0), msg_(copystr(msg ? msg : "Unspecified DirectorException message")) {
    }

    ~DirectorException() throw() {
      delete[] classname_;
      delete[] msg_;
    }

    const char *what() const throw() {
      return msg_;
    }

    // Reconstruct and raise/throw the Java Exception that caused the DirectorException
    // Note that any error in the JNI exception handling results in a Java RuntimeException
    void raiseJavaException(JNIEnv *jenv) const {
      if (jenv) {
	jenv->ExceptionClear();

	jmethodID ctorMethodID = 0;
	jclass throwableclass = 0;
        if (classname_) {
          throwableclass = jenv->FindClass(classname_);
          if (throwableclass)
            ctorMethodID = jenv->GetMethodID(throwableclass, "<init>", "(Ljava/lang/String;)V");
	}

	if (ctorMethodID) {
	  jenv->ThrowNew(throwableclass, what());
	} else {
	  SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, what());
	}
      }
    }

  private:
    static char *copypath(const char *srcmsg) {
      char *target = copystr(srcmsg);
      for (char *c=target; *c; ++c) {
        if ('.' == *c)
          *c = '/';
      }
      return target;
    }

    static char *copystr(const char *srcmsg) {
      char *target = 0;
      if (srcmsg) {
	int msglen = strlen(srcmsg) + 1;
	target = new char[msglen];
	strncpy(target, srcmsg, msglen);
      }
      return target;
    }

    const char *classname_;
    const char *msg_;
  };

  // Helper method to determine if a Java throwable matches a particular Java class type
  bool ExceptionMatches(JNIEnv *jenv, jthrowable throwable, const char *classname) {
    bool matches = false;

    if (throwable && jenv && classname) {
      // Exceptions need to be cleared for correct behavior.
      // The caller of ExceptionMatches should restore pending exceptions if desired -
      // the caller already has the throwable.
      jenv->ExceptionClear();

      jclass clz = jenv->FindClass(classname);
      if (clz) {
	jclass classclz = jenv->GetObjectClass(clz);
	jmethodID isInstanceMethodID = jenv->GetMethodID(classclz, "isInstance", "(Ljava/lang/Object;)Z");
	if (isInstanceMethodID) {
	  matches = jenv->CallBooleanMethod(clz, isInstanceMethodID, throwable) != 0;
	}
      }

#if defined(DEBUG_DIRECTOR_EXCEPTION)
      if (jenv->ExceptionCheck()) {
        // Typically occurs when an invalid classname argument is passed resulting in a ClassNotFoundException
        JavaExceptionMessage exc(jenv, jenv->ExceptionOccurred());
        std::cout << "Error: ExceptionMatches: class '" << classname << "' : " << exc.message() << std::endl;
      }
#endif
    }
    return matches;
  }

}

namespace Swig {
  namespace {
    jclass jclass_MuArgusCtrlJNI = NULL;
    jmethodID director_methids[1];
  }
}

#if defined(SWIG_NOINCLUDE) || defined(SWIG_NOARRAYS)


static int SWIG_JavaArrayInBool (JNIEnv *jenv, jboolean **jarr, bool **carr, jbooleanArray input);
static void SWIG_JavaArrayArgoutBool (JNIEnv *jenv, jboolean *jarr, bool *carr, jbooleanArray input);
static jbooleanArray SWIG_JavaArrayOutBool (JNIEnv *jenv, bool *result, jsize sz);


static int SWIG_JavaArrayInSchar (JNIEnv *jenv, jbyte **jarr, signed char **carr, jbyteArray input);
static void SWIG_JavaArrayArgoutSchar (JNIEnv *jenv, jbyte *jarr, signed char *carr, jbyteArray input);
static jbyteArray SWIG_JavaArrayOutSchar (JNIEnv *jenv, signed char *result, jsize sz);


static int SWIG_JavaArrayInUchar (JNIEnv *jenv, jshort **jarr, unsigned char **carr, jshortArray input);
static void SWIG_JavaArrayArgoutUchar (JNIEnv *jenv, jshort *jarr, unsigned char *carr, jshortArray input);
static jshortArray SWIG_JavaArrayOutUchar (JNIEnv *jenv, unsigned char *result, jsize sz);


static int SWIG_JavaArrayInShort (JNIEnv *jenv, jshort **jarr, short **carr, jshortArray input);
static void SWIG_JavaArrayArgoutShort (JNIEnv *jenv, jshort *jarr, short *carr, jshortArray input);
static jshortArray SWIG_JavaArrayOutShort (JNIEnv *jenv, short *result, jsize sz);


static int SWIG_JavaArrayInUshort (JNIEnv *jenv, jint **jarr, unsigned short **carr, jintArray input);
static void SWIG_JavaArrayArgoutUshort (JNIEnv *jenv, jint *jarr, unsigned short *carr, jintArray input);
static jintArray SWIG_JavaArrayOutUshort (JNIEnv *jenv, unsigned short *result, jsize sz);


static int SWIG_JavaArrayInInt (JNIEnv *jenv, jint **jarr, int **carr, jintArray input);
static void SWIG_JavaArrayArgoutInt (JNIEnv *jenv, jint *jarr, int *carr, jintArray input);
static jintArray SWIG_JavaArrayOutInt (JNIEnv *jenv, int *result, jsize sz);


static int SWIG_JavaArrayInUint (JNIEnv *jenv, jlong **jarr, unsigned int **carr, jlongArray input);
static void SWIG_JavaArrayArgoutUint (JNIEnv *jenv, jlong *jarr, unsigned int *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutUint (JNIEnv *jenv, unsigned int *result, jsize sz);


static int SWIG_JavaArrayInLong (JNIEnv *jenv, jint **jarr, long **carr, jintArray input);
static void SWIG_JavaArrayArgoutLong (JNIEnv *jenv, jint *jarr, long *carr, jintArray input);
static jintArray SWIG_JavaArrayOutLong (JNIEnv *jenv, long *result, jsize sz);


static int SWIG_JavaArrayInUlong (JNIEnv *jenv, jlong **jarr, unsigned long **carr, jlongArray input);
static void SWIG_JavaArrayArgoutUlong (JNIEnv *jenv, jlong *jarr, unsigned long *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutUlong (JNIEnv *jenv, unsigned long *result, jsize sz);


static int SWIG_JavaArrayInLonglong (JNIEnv *jenv, jlong **jarr, jlong **carr, jlongArray input);
static void SWIG_JavaArrayArgoutLonglong (JNIEnv *jenv, jlong *jarr, jlong *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutLonglong (JNIEnv *jenv, jlong *result, jsize sz);


static int SWIG_JavaArrayInFloat (JNIEnv *jenv, jfloat **jarr, float **carr, jfloatArray input);
static void SWIG_JavaArrayArgoutFloat (JNIEnv *jenv, jfloat *jarr, float *carr, jfloatArray input);
static jfloatArray SWIG_JavaArrayOutFloat (JNIEnv *jenv, float *result, jsize sz);


static int SWIG_JavaArrayInDouble (JNIEnv *jenv, jdouble **jarr, double **carr, jdoubleArray input);
static void SWIG_JavaArrayArgoutDouble (JNIEnv *jenv, jdouble *jarr, double *carr, jdoubleArray input);
static jdoubleArray SWIG_JavaArrayOutDouble (JNIEnv *jenv, double *result, jsize sz);


#else


/* bool[] support */
static int SWIG_JavaArrayInBool (JNIEnv *jenv, jboolean **jarr, bool **carr, jbooleanArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetBooleanArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new bool[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = ((*jarr)[i] != 0);
  return 1;
}

static void SWIG_JavaArrayArgoutBool (JNIEnv *jenv, jboolean *jarr, bool *carr, jbooleanArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jboolean)carr[i];
  jenv->ReleaseBooleanArrayElements(input, jarr, 0);
}

static jbooleanArray SWIG_JavaArrayOutBool (JNIEnv *jenv, bool *result, jsize sz) {
  jboolean *arr;
  int i;
  jbooleanArray jresult = jenv->NewBooleanArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetBooleanArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jboolean)result[i];
  jenv->ReleaseBooleanArrayElements(jresult, arr, 0);
  return jresult;
}


/* signed char[] support */
static int SWIG_JavaArrayInSchar (JNIEnv *jenv, jbyte **jarr, signed char **carr, jbyteArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetByteArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new signed char[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (signed char)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutSchar (JNIEnv *jenv, jbyte *jarr, signed char *carr, jbyteArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jbyte)carr[i];
  jenv->ReleaseByteArrayElements(input, jarr, 0);
}

static jbyteArray SWIG_JavaArrayOutSchar (JNIEnv *jenv, signed char *result, jsize sz) {
  jbyte *arr;
  int i;
  jbyteArray jresult = jenv->NewByteArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetByteArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jbyte)result[i];
  jenv->ReleaseByteArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned char[] support */
static int SWIG_JavaArrayInUchar (JNIEnv *jenv, jshort **jarr, unsigned char **carr, jshortArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetShortArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned char[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned char)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUchar (JNIEnv *jenv, jshort *jarr, unsigned char *carr, jshortArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jshort)carr[i];
  jenv->ReleaseShortArrayElements(input, jarr, 0);
}

static jshortArray SWIG_JavaArrayOutUchar (JNIEnv *jenv, unsigned char *result, jsize sz) {
  jshort *arr;
  int i;
  jshortArray jresult = jenv->NewShortArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetShortArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jshort)result[i];
  jenv->ReleaseShortArrayElements(jresult, arr, 0);
  return jresult;
}


/* short[] support */
static int SWIG_JavaArrayInShort (JNIEnv *jenv, jshort **jarr, short **carr, jshortArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetShortArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new short[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (short)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutShort (JNIEnv *jenv, jshort *jarr, short *carr, jshortArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jshort)carr[i];
  jenv->ReleaseShortArrayElements(input, jarr, 0);
}

static jshortArray SWIG_JavaArrayOutShort (JNIEnv *jenv, short *result, jsize sz) {
  jshort *arr;
  int i;
  jshortArray jresult = jenv->NewShortArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetShortArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jshort)result[i];
  jenv->ReleaseShortArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned short[] support */
static int SWIG_JavaArrayInUshort (JNIEnv *jenv, jint **jarr, unsigned short **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned short[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned short)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUshort (JNIEnv *jenv, jint *jarr, unsigned short *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutUshort (JNIEnv *jenv, unsigned short *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* int[] support */
static int SWIG_JavaArrayInInt (JNIEnv *jenv, jint **jarr, int **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new int[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (int)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutInt (JNIEnv *jenv, jint *jarr, int *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutInt (JNIEnv *jenv, int *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned int[] support */
static int SWIG_JavaArrayInUint (JNIEnv *jenv, jlong **jarr, unsigned int **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned int[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned int)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUint (JNIEnv *jenv, jlong *jarr, unsigned int *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutUint (JNIEnv *jenv, unsigned int *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* long[] support */
static int SWIG_JavaArrayInLong (JNIEnv *jenv, jint **jarr, long **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new long[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (long)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutLong (JNIEnv *jenv, jint *jarr, long *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutLong (JNIEnv *jenv, long *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned long[] support */
static int SWIG_JavaArrayInUlong (JNIEnv *jenv, jlong **jarr, unsigned long **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned long[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned long)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUlong (JNIEnv *jenv, jlong *jarr, unsigned long *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutUlong (JNIEnv *jenv, unsigned long *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* jlong[] support */
static int SWIG_JavaArrayInLonglong (JNIEnv *jenv, jlong **jarr, jlong **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new jlong[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (jlong)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutLonglong (JNIEnv *jenv, jlong *jarr, jlong *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutLonglong (JNIEnv *jenv, jlong *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* float[] support */
static int SWIG_JavaArrayInFloat (JNIEnv *jenv, jfloat **jarr, float **carr, jfloatArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetFloatArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new float[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (float)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutFloat (JNIEnv *jenv, jfloat *jarr, float *carr, jfloatArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jfloat)carr[i];
  jenv->ReleaseFloatArrayElements(input, jarr, 0);
}

static jfloatArray SWIG_JavaArrayOutFloat (JNIEnv *jenv, float *result, jsize sz) {
  jfloat *arr;
  int i;
  jfloatArray jresult = jenv->NewFloatArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetFloatArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jfloat)result[i];
  jenv->ReleaseFloatArrayElements(jresult, arr, 0);
  return jresult;
}


/* double[] support */
static int SWIG_JavaArrayInDouble (JNIEnv *jenv, jdouble **jarr, double **carr, jdoubleArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetDoubleArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new double[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (double)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutDouble (JNIEnv *jenv, jdouble *jarr, double *carr, jdoubleArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jdouble)carr[i];
  jenv->ReleaseDoubleArrayElements(input, jarr, 0);
}

static jdoubleArray SWIG_JavaArrayOutDouble (JNIEnv *jenv, double *result, jsize sz) {
  jdouble *arr;
  int i;
  jdoubleArray jresult = jenv->NewDoubleArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetDoubleArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jdouble)result[i];
  jenv->ReleaseDoubleArrayElements(jresult, arr, 0);
  return jresult;
}


#endif


#include <string>


#include "IProgressListener.h"
#include "MuArgCtrl.h"



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "MuArgCtrl_wrap.h"

SwigDirector_IProgressListener::SwigDirector_IProgressListener(JNIEnv *jenv) : IProgressListener(), Swig::Director(jenv) {
}

SwigDirector_IProgressListener::~SwigDirector_IProgressListener() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


void SwigDirector_IProgressListener::UpdateProgress(int perc) {
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  jint jperc  ;
  
  if (!swig_override[0]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method IProgressListener::UpdateProgress.");
    return;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jperc = (jint) perc;
    jenv->CallStaticVoidMethod(Swig::jclass_MuArgusCtrlJNI, Swig::director_methids[0], swigjobj, jperc);
    jthrowable swigerror = jenv->ExceptionOccurred();
    if (swigerror) {
      jenv->ExceptionClear();
      throw Swig::DirectorException(jenv, swigerror);
    }
    
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object in IProgressListener::UpdateProgress ");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
}

void SwigDirector_IProgressListener::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "UpdateProgress", "(I)V", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("muargus/extern/dataengine/IProgressListener");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 1; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_delete_1IProgressListener(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  IProgressListener *arg1 = (IProgressListener *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(IProgressListener **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_IProgressListener_1UpdateProgress(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  IProgressListener *arg1 = (IProgressListener *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(IProgressListener **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->UpdateProgress(arg2);
}


SWIGEXPORT jlong JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_new_1IProgressListener(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  IProgressListener *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (IProgressListener *)new SwigDirector_IProgressListener(jenv);
  *(IProgressListener **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_IProgressListener_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  IProgressListener *obj = *((IProgressListener **)&objarg);
  (void)jcls;
  SwigDirector_IProgressListener *director = dynamic_cast<SwigDirector_IProgressListener *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_IProgressListener_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  IProgressListener *obj = *((IProgressListener **)&objarg);
  SwigDirector_IProgressListener *director = dynamic_cast<SwigDirector_IProgressListener *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT jlong JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_new_1CMuArgCtrl(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  CMuArgCtrl *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (CMuArgCtrl *)new CMuArgCtrl();
  *(CMuArgCtrl **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_delete_1CMuArgCtrl(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetProgressListener(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  IProgressListener *arg2 = (IProgressListener *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = *(IProgressListener **)&jarg2; 
  (arg1)->SetProgressListener(arg2);
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1ComputeBIRRateThreshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jdoubleArray jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  double *arg4 = (double *) 0 ;
  double temp4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (double)0;
    arg4 = &temp4; 
  }
  result = (bool)(arg1)->ComputeBIRRateThreshold(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jdouble jvalue = (jdouble)temp4;
    jenv->SetDoubleArrayRegion(jarg4, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1NumberOfHouseholds(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (long)(arg1)->NumberOfHouseholds();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1CalculateBHRFreq(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3, jint jarg4, jint jarg5, jdoubleArray jarg6, jintArray jarg7) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool arg3 ;
  long arg4 ;
  long arg5 ;
  double *arg6 = (double *) 0 ;
  long *arg7 = (long *) 0 ;
  double temp6 ;
  long temp7 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = jarg3 ? true : false; 
  arg4 = (long)jarg4; 
  arg5 = (long)jarg5; 
  {
    if (!jarg6) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg6) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp6 = (double)0;
    arg6 = &temp6; 
  }
  {
    if (!jarg7) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg7) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp7 = (long)0;
    arg7 = &temp7; 
  }
  result = (bool)(arg1)->CalculateBHRFreq(arg2,arg3,arg4,arg5,arg6,arg7);
  jresult = (jboolean)result; 
  {
    jdouble jvalue = (jdouble)temp6;
    jenv->SetDoubleArrayRegion(jarg6, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp7;
    jenv->SetIntArrayRegion(jarg7, 0, 1, &jvalue);
  }
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1CalculateBIRFreq(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jdoubleArray jarg4, jintArray jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  double *arg4 = (double *) 0 ;
  long *arg5 = (long *) 0 ;
  double temp4 ;
  long temp5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (double)0;
    arg4 = &temp4; 
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  result = (bool)(arg1)->CalculateBIRFreq(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  {
    jdouble jvalue = (jdouble)temp4;
    jenv->SetDoubleArrayRegion(jarg4, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetBHRThreshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jintArray jarg4, jintArray jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  long *arg4 = (long *) 0 ;
  long *arg5 = (long *) 0 ;
  long temp4 ;
  long temp5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (long)0;
    arg4 = &temp4; 
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  result = (bool)(arg1)->SetBHRThreshold(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp4;
    jenv->SetIntArrayRegion(jarg4, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetBHRHistogramData(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jdoubleArray jarg4, jintArray jarg5, jintArray jarg6) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  double *arg4 = (double *) 0 ;
  long *arg5 = (long *) 0 ;
  long *arg6 = (long *) 0 ;
  jdouble *jarr4 ;
  jint *jarr5 ;
  jint *jarr6 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  if (!SWIG_JavaArrayInDouble(jenv, &jarr4, (double **)&arg4, jarg4)) return 0; 
  if (!SWIG_JavaArrayInLong(jenv, &jarr5, (long **)&arg5, jarg5)) return 0; 
  if (!SWIG_JavaArrayInLong(jenv, &jarr6, (long **)&arg6, jarg6)) return 0; 
  result = (bool)(arg1)->GetBHRHistogramData(arg2,arg3,arg4,arg5,arg6);
  jresult = (jboolean)result; 
  SWIG_JavaArrayArgoutDouble(jenv, jarr4, (double *)arg4, jarg4); 
  SWIG_JavaArrayArgoutLong(jenv, jarr5, (long *)arg5, jarg5); 
  SWIG_JavaArrayArgoutLong(jenv, jarr6, (long *)arg6, jarg6); 
  delete [] arg4; 
  delete [] arg5; 
  delete [] arg6; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1CalculateBaseHouseholdRisk(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jintArray jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long *arg2 = (long *) 0 ;
  long temp2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  {
    if (!jarg2) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg2) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp2 = (long)0;
    arg2 = &temp2; 
  }
  result = (bool)(arg1)->CalculateBaseHouseholdRisk(arg2);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp2;
    jenv->SetIntArrayRegion(jarg2, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1MakeFileSafe(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jboolean jarg3, jboolean jarg4, jint jarg5, jboolean jarg6, jboolean jarg7) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  std::string arg2 ;
  bool arg3 ;
  bool arg4 ;
  long arg5 ;
  bool arg6 ;
  bool arg7 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = jarg3 ? true : false; 
  arg4 = jarg4 ? true : false; 
  arg5 = (long)jarg5; 
  arg6 = jarg6 ? true : false; 
  arg7 = jarg7 ? true : false; 
  result = (bool)(arg1)->MakeFileSafe(arg2,arg3,arg4,arg5,arg6,arg7);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetBIRHistogramData(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jdoubleArray jarg4, jdoubleArray jarg5, jintArray jarg6) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  double *arg4 = (double *) 0 ;
  double *arg5 = (double *) 0 ;
  long *arg6 = (long *) 0 ;
  jdouble *jarr4 ;
  double temp5 ;
  jint *jarr6 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  if (!SWIG_JavaArrayInDouble(jenv, &jarr4, (double **)&arg4, jarg4)) return 0; 
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (double)0;
    arg5 = &temp5; 
  }
  if (!SWIG_JavaArrayInLong(jenv, &jarr6, (long **)&arg6, jarg6)) return 0; 
  result = (bool)(arg1)->GetBIRHistogramData(arg2,arg3,arg4,arg5,arg6);
  jresult = (jboolean)result; 
  SWIG_JavaArrayArgoutDouble(jenv, jarr4, (double *)arg4, jarg4); 
  {
    jdouble jvalue = (jdouble)temp5;
    jenv->SetDoubleArrayRegion(jarg5, 0, 1, &jvalue);
  }
  SWIG_JavaArrayArgoutLong(jenv, jarr6, (long *)arg6, jarg6); 
  delete [] arg4; 
  
  delete [] arg6; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1MakeFileSafeClearOptions(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (bool)(arg1)->MakeFileSafeClearOptions();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetWeightNoise(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jboolean jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  bool arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  arg4 = jarg4 ? true : false; 
  result = (bool)(arg1)->SetWeightNoise(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetSuppressPrior(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  result = (bool)(arg1)->SetSuppressPrior(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetRound(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jint jarg4, jboolean jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  long arg4 ;
  bool arg5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  arg4 = (long)jarg4; 
  arg5 = jarg5 ? true : false; 
  result = (bool)(arg1)->SetRound(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetChangeFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3, jint jarg4, jintArray jarg5, jstring jarg6) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  std::string arg3 ;
  long arg4 ;
  long *arg5 = (long *) 0 ;
  std::string arg6 ;
  jint *jarr5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  arg4 = (long)jarg4; 
  if (!SWIG_JavaArrayInLong(jenv, &jarr5, (long **)&arg5, jarg5)) return 0; 
  if(!jarg6) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg6_pstr = (const char *)jenv->GetStringUTFChars(jarg6, 0); 
  if (!arg6_pstr) return 0;
  (&arg6)->assign(arg6_pstr);
  jenv->ReleaseStringUTFChars(jarg6, arg6_pstr); 
  result = (bool)(arg1)->SetChangeFile(arg2,arg3,arg4,arg5,arg6);
  jresult = (jboolean)result; 
  SWIG_JavaArrayArgoutLong(jenv, jarr5, (long *)arg5, jarg5); 
  delete [] arg5; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetVarProperties(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jintArray jarg3, jintArray jarg4, jintArray jarg5, jdoubleArray jarg6, jintArray jarg7, jobjectArray jarg8, jobjectArray jarg9, jintArray jarg10, jintArray jarg11) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long *arg3 = (long *) 0 ;
  long *arg4 = (long *) 0 ;
  long *arg5 = (long *) 0 ;
  double *arg6 = (double *) 0 ;
  long *arg7 = (long *) 0 ;
  char **arg8 = (char **) 0 ;
  char **arg9 = (char **) 0 ;
  long *arg10 = (long *) 0 ;
  long *arg11 = (long *) 0 ;
  long temp3 ;
  long temp4 ;
  long temp5 ;
  double temp6 ;
  long temp7 ;
  char *temp8 ;
  char *temp9 ;
  long temp10 ;
  long temp11 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (long)0;
    arg3 = &temp3; 
  }
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (long)0;
    arg4 = &temp4; 
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  {
    if (!jarg6) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg6) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp6 = (double)0;
    arg6 = &temp6; 
  }
  {
    if (!jarg7) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg7) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp7 = (long)0;
    arg7 = &temp7; 
  }
  {
    if (!jarg8) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg8) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg8 = &temp8; 
    *arg8 = 0;
  }
  {
    if (!jarg9) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg9) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg9 = &temp9; 
    *arg9 = 0;
  }
  {
    if (!jarg10) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg10) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp10 = (long)0;
    arg10 = &temp10; 
  }
  {
    if (!jarg11) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg11) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp11 = (long)0;
    arg11 = &temp11; 
  }
  result = (bool)(arg1)->GetVarProperties(arg2,arg3,arg4,arg5,arg6,arg7,(char const **)arg8,(char const **)arg9,arg10,arg11);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp3;
    jenv->SetIntArrayRegion(jarg3, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp4;
    jenv->SetIntArrayRegion(jarg4, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  {
    jdouble jvalue = (jdouble)temp6;
    jenv->SetDoubleArrayRegion(jarg6, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp7;
    jenv->SetIntArrayRegion(jarg7, 0, 1, &jvalue);
  }
  {
    jstring jnewstring = NULL;
    if (arg8) {
      jnewstring = jenv->NewStringUTF(*arg8);
    }
    jenv->SetObjectArrayElement(jarg8, 0, jnewstring); 
  }
  {
    jstring jnewstring = NULL;
    if (arg9) {
      jnewstring = jenv->NewStringUTF(*arg9);
    }
    jenv->SetObjectArrayElement(jarg9, 0, jnewstring); 
  }
  {
    jint jvalue = (jint)temp10;
    jenv->SetIntArrayRegion(jarg10, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp11;
    jenv->SetIntArrayRegion(jarg11, 0, 1, &jvalue);
  }
  
  
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetVarCode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jobjectArray jarg4, jintArray jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  char **arg4 = (char **) 0 ;
  long *arg5 = (long *) 0 ;
  char *temp4 ;
  long temp5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg4 = &temp4; 
    *arg4 = 0;
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  result = (bool)(arg1)->GetVarCode(arg2,arg3,(char const **)arg4,arg5);
  jresult = (jboolean)result; 
  {
    jstring jnewstring = NULL;
    if (arg4) {
      jnewstring = jenv->NewStringUTF(*arg4);
    }
    jenv->SetObjectArrayElement(jarg4, 0, jnewstring); 
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetTableUC(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jbooleanArray jarg4, jintArray jarg5, jintArray jarg6) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  bool *arg4 = (bool *) 0 ;
  long *arg5 = (long *) 0 ;
  long *arg6 = (long *) 0 ;
  bool temp4 ;
  long temp5 ;
  jint *jarr6 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = false;
    arg4 = &temp4; 
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  if (!SWIG_JavaArrayInLong(jenv, &jarr6, (long **)&arg6, jarg6)) return 0; 
  result = (bool)(arg1)->GetTableUC(arg2,arg3,arg4,arg5,arg6);
  jresult = (jboolean)result; 
  {
    jboolean jvalue = (jboolean)temp4;
    jenv->SetBooleanArrayRegion(jarg4, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  SWIG_JavaArrayArgoutLong(jenv, jarr6, (long *)arg6, jarg6); 
  
  
  delete [] arg6; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetPramValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  result = (bool)(arg1)->SetPramValue(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetPramVar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jboolean jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  bool arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  arg4 = jarg4 ? true : false; 
  result = (bool)(arg1)->SetPramVar(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1ClosePramVar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->ClosePramVar(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetMinMaxValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdoubleArray jarg3, jdoubleArray jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double *arg3 = (double *) 0 ;
  double *arg4 = (double *) 0 ;
  double temp3 ;
  double temp4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (double)0;
    arg3 = &temp3; 
  }
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (double)0;
    arg4 = &temp4; 
  }
  result = (bool)(arg1)->GetMinMaxValue(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jdouble jvalue = (jdouble)temp3;
    jenv->SetDoubleArrayRegion(jarg3, 0, 1, &jvalue);
  }
  {
    jdouble jvalue = (jdouble)temp4;
    jenv->SetDoubleArrayRegion(jarg4, 0, 1, &jvalue);
  }
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetCodingBottom(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jstring jarg4, jboolean jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  std::string arg4 ;
  bool arg5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  arg5 = jarg5 ? true : false; 
  result = (bool)(arg1)->SetCodingBottom(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetCodingTop(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jstring jarg4, jboolean jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  std::string arg4 ;
  bool arg5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  arg5 = jarg5 ? true : false; 
  result = (bool)(arg1)->SetCodingTop(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetBirThreshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jintArray jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  long *arg4 = (long *) 0 ;
  long temp4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (long)0;
    arg4 = &temp4; 
  }
  result = (bool)(arg1)->SetBirThreshold(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp4;
    jenv->SetIntArrayRegion(jarg4, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetNumberOfChangeFiles(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->SetNumberOfChangeFiles(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1CleanAll(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (bool)(arg1)->CleanAll();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetOutFileInfo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jstring jarg3, jstring jarg4, jboolean jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  bool arg2 ;
  std::string arg3 ;
  std::string arg4 ;
  bool arg5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  arg5 = jarg5 ? true : false; 
  result = (bool)(arg1)->SetOutFileInfo(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1NumberofRecords(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (long)(arg1)->NumberofRecords();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetInFileInfo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jstring jarg3, jboolean jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  bool arg2 ;
  std::string arg3 ;
  bool arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  arg4 = jarg4 ? true : false; 
  result = (bool)(arg1)->SetInFileInfo(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1WriteVariablesInFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jint jarg4, jintArray jarg5, jstring jarg6, jintArray jarg7) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  std::string arg2 ;
  std::string arg3 ;
  long arg4 ;
  long *arg5 = (long *) 0 ;
  std::string arg6 ;
  long *arg7 = (long *) 0 ;
  jint *jarr5 ;
  long temp7 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  arg4 = (long)jarg4; 
  if (!SWIG_JavaArrayInLong(jenv, &jarr5, (long **)&arg5, jarg5)) return 0; 
  if(!jarg6) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg6_pstr = (const char *)jenv->GetStringUTFChars(jarg6, 0); 
  if (!arg6_pstr) return 0;
  (&arg6)->assign(arg6_pstr);
  jenv->ReleaseStringUTFChars(jarg6, arg6_pstr); 
  {
    if (!jarg7) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg7) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp7 = (long)0;
    arg7 = &temp7; 
  }
  result = (bool)(arg1)->WriteVariablesInFile(arg2,arg3,arg4,arg5,arg6,arg7);
  jresult = (jboolean)result; 
  SWIG_JavaArrayArgoutLong(jenv, jarr5, (long *)arg5, jarg5); 
  {
    jint jvalue = (jint)temp7;
    jenv->SetIntArrayRegion(jarg7, 0, 1, &jvalue);
  }
  delete [] arg5; 
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1ApplyRecode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (bool)(arg1)->ApplyRecode();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1DoTruncate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  result = (bool)(arg1)->DoTruncate(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1UndoRecode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->UndoRecode(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1DoRecode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3, jstring jarg4, jstring jarg5, jintArray jarg6, jintArray jarg7, jintArray jarg8, jobjectArray jarg9) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  char *arg3 = (char *) 0 ;
  char *arg4 = (char *) 0 ;
  char *arg5 = (char *) 0 ;
  long *arg6 = (long *) 0 ;
  long *arg7 = (long *) 0 ;
  long *arg8 = (long *) 0 ;
  char **arg9 = (char **) 0 ;
  long temp6 ;
  long temp7 ;
  long temp8 ;
  char *temp9 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)jenv->GetStringUTFChars(jarg3, 0);
    if (!arg3) return 0;
  }
  arg4 = 0;
  if (jarg4) {
    arg4 = (char *)jenv->GetStringUTFChars(jarg4, 0);
    if (!arg4) return 0;
  }
  arg5 = 0;
  if (jarg5) {
    arg5 = (char *)jenv->GetStringUTFChars(jarg5, 0);
    if (!arg5) return 0;
  }
  {
    if (!jarg6) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg6) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp6 = (long)0;
    arg6 = &temp6; 
  }
  {
    if (!jarg7) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg7) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp7 = (long)0;
    arg7 = &temp7; 
  }
  {
    if (!jarg8) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg8) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp8 = (long)0;
    arg8 = &temp8; 
  }
  {
    if (!jarg9) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg9) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg9 = &temp9; 
    *arg9 = 0;
  }
  result = (bool)(arg1)->DoRecode(arg2,(char const *)arg3,(char const *)arg4,(char const *)arg5,arg6,arg7,arg8,(char const **)arg9);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp6;
    jenv->SetIntArrayRegion(jarg6, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp7;
    jenv->SetIntArrayRegion(jarg7, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp8;
    jenv->SetIntArrayRegion(jarg8, 0, 1, &jvalue);
  }
  {
    jstring jnewstring = NULL;
    if (arg9) {
      jnewstring = jenv->NewStringUTF(*arg9);
    }
    jenv->SetObjectArrayElement(jarg9, 0, jnewstring); 
  }
  if (arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)arg3);
  if (arg4) jenv->ReleaseStringUTFChars(jarg4, (const char *)arg4);
  if (arg5) jenv->ReleaseStringUTFChars(jarg5, (const char *)arg5);
  
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1UnsafeVariableClose(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->UnsafeVariableClose(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1UnsafeVariableCodes(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jintArray jarg4, jintArray jarg5, jobjectArray jarg6, jintArray jarg7, jintArray jarg8) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  long *arg4 = (long *) 0 ;
  long *arg5 = (long *) 0 ;
  char **arg6 = (char **) 0 ;
  long *arg7 = (long *) 0 ;
  long *arg8 = (long *) 0 ;
  long temp4 ;
  long temp5 ;
  char *temp6 ;
  long temp7 ;
  jint *jarr8 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (long)0;
    arg4 = &temp4; 
  }
  {
    if (!jarg5) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg5) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp5 = (long)0;
    arg5 = &temp5; 
  }
  {
    if (!jarg6) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg6) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg6 = &temp6; 
    *arg6 = 0;
  }
  {
    if (!jarg7) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg7) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp7 = (long)0;
    arg7 = &temp7; 
  }
  if (!SWIG_JavaArrayInLong(jenv, &jarr8, (long **)&arg8, jarg8)) return 0; 
  result = (bool)(arg1)->UnsafeVariableCodes(arg2,arg3,arg4,arg5,(char const **)arg6,arg7,arg8);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp4;
    jenv->SetIntArrayRegion(jarg4, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp5;
    jenv->SetIntArrayRegion(jarg5, 0, 1, &jvalue);
  }
  {
    jstring jnewstring = NULL;
    if (arg6) {
      jnewstring = jenv->NewStringUTF(*arg6);
    }
    jenv->SetObjectArrayElement(jarg6, 0, jnewstring); 
  }
  {
    jint jvalue = (jint)temp7;
    jenv->SetIntArrayRegion(jarg7, 0, 1, &jvalue);
  }
  SWIG_JavaArrayArgoutLong(jenv, jarr8, (long *)arg8, jarg8); 
  
  
  
  delete [] arg8; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1UnsafeVariablePrepare(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jintArray jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long *arg3 = (long *) 0 ;
  long temp3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (long)0;
    arg3 = &temp3; 
  }
  result = (bool)(arg1)->UnsafeVariablePrepare(arg2,arg3);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp3;
    jenv->SetIntArrayRegion(jarg3, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1UnsafeVariable(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jintArray jarg3, jintArray jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long *arg3 = (long *) 0 ;
  long *arg4 = (long *) 0 ;
  long temp3 ;
  jint *jarr4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (long)0;
    arg3 = &temp3; 
  }
  if (!SWIG_JavaArrayInLong(jenv, &jarr4, (long **)&arg4, jarg4)) return 0; 
  result = (bool)(arg1)->UnsafeVariable(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp3;
    jenv->SetIntArrayRegion(jarg3, 0, 1, &jvalue);
  }
  SWIG_JavaArrayArgoutLong(jenv, jarr4, (long *)arg4, jarg4); 
  
  delete [] arg4; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetMaxnUC(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  result = (long)(arg1)->GetMaxnUC();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1ComputeTables(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jintArray jarg2, jintArray jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long *arg2 = (long *) 0 ;
  long *arg3 = (long *) 0 ;
  long temp2 ;
  long temp3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  {
    if (!jarg2) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg2) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp2 = (long)0;
    arg2 = &temp2; 
  }
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (long)0;
    arg3 = &temp3; 
  }
  result = (bool)(arg1)->ComputeTables(arg2,arg3);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp2;
    jenv->SetIntArrayRegion(jarg2, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp3;
    jenv->SetIntArrayRegion(jarg3, 0, 1, &jvalue);
  }
  
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1BaseIndividualRisk(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3, jdoubleArray jarg4) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  double arg3 ;
  double *arg4 = (double *) 0 ;
  double temp4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (double)jarg3; 
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (double)0;
    arg4 = &temp4; 
  }
  result = (bool)(arg1)->BaseIndividualRisk(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jdouble jvalue = (jdouble)temp4;
    jenv->SetDoubleArrayRegion(jarg4, 0, 1, &jvalue);
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetTable(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jintArray jarg5, jboolean jarg6, jint jarg7) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  long arg4 ;
  long *arg5 = (long *) 0 ;
  bool arg6 ;
  long arg7 ;
  jint *jarr5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  arg4 = (long)jarg4; 
  if (!SWIG_JavaArrayInLong(jenv, &jarr5, (long **)&arg5, jarg5)) return 0; 
  arg6 = jarg6 ? true : false; 
  arg7 = (long)jarg7; 
  result = (bool)(arg1)->SetTable(arg2,arg3,arg4,arg5,arg6,arg7);
  jresult = (jboolean)result; 
  SWIG_JavaArrayArgoutLong(jenv, jarr5, (long *)arg5, jarg5); 
  delete [] arg5; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetNumberTab(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->SetNumberTab(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1ExploreFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jintArray jarg3, jintArray jarg4, jintArray jarg5) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  std::string arg2 ;
  long *arg3 = (long *) 0 ;
  long *arg4 = (long *) 0 ;
  long *arg5 = (long *) 0 ;
  long temp3 ;
  long temp4 ;
  jint *jarr5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp3 = (long)0;
    arg3 = &temp3; 
  }
  {
    if (!jarg4) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg4) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    temp4 = (long)0;
    arg4 = &temp4; 
  }
  if (!SWIG_JavaArrayInLong(jenv, &jarr5, (long **)&arg5, jarg5)) return 0; 
  result = (bool)(arg1)->ExploreFile(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  {
    jint jvalue = (jint)temp3;
    jenv->SetIntArrayRegion(jarg3, 0, 1, &jvalue);
  }
  {
    jint jvalue = (jint)temp4;
    jenv->SetIntArrayRegion(jarg4, 0, 1, &jvalue);
  }
  SWIG_JavaArrayArgoutLong(jenv, jarr5, (long *)arg5, jarg5); 
  
  
  delete [] arg5; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetVariable(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jstring jarg6, jstring jarg7, jboolean jarg8, jboolean jarg9, jboolean jarg10, jboolean jarg11, jboolean jarg12, jint jarg13) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  long arg3 ;
  long arg4 ;
  long arg5 ;
  std::string arg6 ;
  std::string arg7 ;
  bool arg8 ;
  bool arg9 ;
  bool arg10 ;
  bool arg11 ;
  bool arg12 ;
  long arg13 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (long)jarg3; 
  arg4 = (long)jarg4; 
  arg5 = (long)jarg5; 
  if(!jarg6) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg6_pstr = (const char *)jenv->GetStringUTFChars(jarg6, 0); 
  if (!arg6_pstr) return 0;
  (&arg6)->assign(arg6_pstr);
  jenv->ReleaseStringUTFChars(jarg6, arg6_pstr); 
  if(!jarg7) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg7_pstr = (const char *)jenv->GetStringUTFChars(jarg7, 0); 
  if (!arg7_pstr) return 0;
  (&arg7)->assign(arg7_pstr);
  jenv->ReleaseStringUTFChars(jarg7, arg7_pstr); 
  arg8 = jarg8 ? true : false; 
  arg9 = jarg9 ? true : false; 
  arg10 = jarg10 ? true : false; 
  arg11 = jarg11 ? true : false; 
  arg12 = jarg12 ? true : false; 
  arg13 = (long)jarg13; 
  result = (bool)(arg1)->SetVariable(arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1SetNumberVar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (bool)(arg1)->SetNumberVar(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_CMuArgCtrl_1GetErrorString(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jobjectArray jarg3) {
  jboolean jresult = 0 ;
  CMuArgCtrl *arg1 = (CMuArgCtrl *) 0 ;
  long arg2 ;
  char **arg3 = (char **) 0 ;
  char *temp3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CMuArgCtrl **)&jarg1; 
  arg2 = (long)jarg2; 
  {
    if (!jarg3) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "array null");
      return 0;
    }
    if (jenv->GetArrayLength(jarg3) == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg3 = &temp3; 
    *arg3 = 0;
  }
  result = (bool)(arg1)->GetErrorString(arg2,(char const **)arg3);
  jresult = (jboolean)result; 
  {
    jstring jnewstring = NULL;
    if (arg3) {
      jnewstring = jenv->NewStringUTF(*arg3);
    }
    jenv->SetObjectArrayElement(jarg3, 0, jnewstring); 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_muargus_extern_dataengine_MuArgusCtrlJNI_swig_1module_1init(JNIEnv *jenv, jclass jcls) {
  int i;
  
  static struct {
    const char *method;
    const char *signature;
  } methods[1] = {
    {
      "SwigDirector_IProgressListener_UpdateProgress", "(Lmuargus/extern/dataengine/IProgressListener;I)V" 
    }
  };
  Swig::jclass_MuArgusCtrlJNI = (jclass) jenv->NewGlobalRef(jcls);
  if (!Swig::jclass_MuArgusCtrlJNI) return;
  for (i = 0; i < (int) (sizeof(methods)/sizeof(methods[0])); ++i) {
    Swig::director_methids[i] = jenv->GetStaticMethodID(jcls, methods[i].method, methods[i].signature);
    if (!Swig::director_methids[i]) return;
  }
}


#ifdef __cplusplus
}
#endif

