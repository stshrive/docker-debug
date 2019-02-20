/*
   Example API for docker edits affecting local drive.
*/

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#   ifdef LIB_EXPORT
#       define LIB_API __declspec(dllexport)
#   else
#       define LIB_API __declspec(dllimport)
#   endif
#else
#   define LIB_API
#endif

#ifdef __cplusplus
}
#endif


/* 
 * Arguments:
 *  a (int)
 *  b (int)
 *
 * Returns: a + b
 */
LIB_API int LibAddIntegers(int a, int b);
