#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _15_kernel0_cpp1_ii_fc606274
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "kernel0.fatbin.c"
extern void __device_stub__Z14nw_gpu0_kernelPhS_Pijjj(unsigned char *, unsigned char *, int *, unsigned, unsigned, unsigned);
extern void __device_stub__Z7nw_gpu0PhS_Pij(unsigned char *, unsigned char *, int *, unsigned);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z14nw_gpu0_kernelPhS_Pijjj(unsigned char *__par0, unsigned char *__par1, int *__par2, unsigned __par3, unsigned __par4, unsigned __par5){__cudaLaunchPrologue(6);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 28UL);__cudaSetupArgSimple(__par5, 32UL);__cudaLaunch(((char *)((void ( *)(unsigned char *, unsigned char *, int *, unsigned, unsigned, unsigned))nw_gpu0_kernel)));}
# 6 "kernel0.cu"
void nw_gpu0_kernel( unsigned char *__cuda_0,unsigned char *__cuda_1,int *__cuda_2,unsigned __cuda_3,unsigned __cuda_4,unsigned __cuda_5)
# 6 "kernel0.cu"
{__device_stub__Z14nw_gpu0_kernelPhS_Pijjj( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 32 "kernel0.cu"
}
# 1 "kernel0.cudafe1.stub.c"
void __device_stub__Z7nw_gpu0PhS_Pij( unsigned char *__par0,  unsigned char *__par1,  int *__par2,  unsigned __par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned char *, unsigned char *, int *, unsigned))nw_gpu0))); }
# 34 "kernel0.cu"
void nw_gpu0( unsigned char *__cuda_0,unsigned char *__cuda_1,int *__cuda_2,unsigned __cuda_3)
# 34 "kernel0.cu"
{__device_stub__Z7nw_gpu0PhS_Pij( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 49 "kernel0.cu"
}
# 1 "kernel0.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T13) {  __nv_dummy_param_ref(__T13); __nv_save_fatbinhandle_for_managed_rt(__T13); __cudaRegisterEntry(__T13, ((void ( *)(unsigned char *, unsigned char *, int *, unsigned))nw_gpu0), _Z7nw_gpu0PhS_Pij, (-1)); __cudaRegisterEntry(__T13, ((void ( *)(unsigned char *, unsigned char *, int *, unsigned, unsigned, unsigned))nw_gpu0_kernel), _Z14nw_gpu0_kernelPhS_Pijjj, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
