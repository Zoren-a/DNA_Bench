#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _15_kernel1_cpp1_ii_78e8e986
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "kernel1.fatbin.c"
extern void __device_stub__Z14nw_gpu1_kernelPhS_Pijj(unsigned char *, unsigned char *, int *, unsigned, unsigned);
extern void __device_stub__Z7nw_gpu1PhS_Pij(unsigned char *, unsigned char *, int *, unsigned);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z14nw_gpu1_kernelPhS_Pijj(unsigned char *__par0, unsigned char *__par1, int *__par2, unsigned __par3, unsigned __par4){__cudaLaunchPrologue(5);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 28UL);__cudaLaunch(((char *)((void ( *)(unsigned char *, unsigned char *, int *, unsigned, unsigned))nw_gpu1_kernel)));}
# 7 "kernel1.cu"
void nw_gpu1_kernel( unsigned char *__cuda_0,unsigned char *__cuda_1,int *__cuda_2,unsigned __cuda_3,unsigned __cuda_4)
# 7 "kernel1.cu"
{__device_stub__Z14nw_gpu1_kernelPhS_Pijj( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 61 "kernel1.cu"
}
# 1 "kernel1.cudafe1.stub.c"
void __device_stub__Z7nw_gpu1PhS_Pij( unsigned char *__par0,  unsigned char *__par1,  int *__par2,  unsigned __par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned char *, unsigned char *, int *, unsigned))nw_gpu1))); }
# 64 "kernel1.cu"
void nw_gpu1( unsigned char *__cuda_0,unsigned char *__cuda_1,int *__cuda_2,unsigned __cuda_3)
# 64 "kernel1.cu"
{__device_stub__Z7nw_gpu1PhS_Pij( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 82 "kernel1.cu"
}
# 1 "kernel1.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T13) {  __nv_dummy_param_ref(__T13); __nv_save_fatbinhandle_for_managed_rt(__T13); __cudaRegisterEntry(__T13, ((void ( *)(unsigned char *, unsigned char *, int *, unsigned))nw_gpu1), _Z7nw_gpu1PhS_Pij, (-1)); __cudaRegisterEntry(__T13, ((void ( *)(unsigned char *, unsigned char *, int *, unsigned, unsigned))nw_gpu1_kernel), _Z14nw_gpu1_kernelPhS_Pijj, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
