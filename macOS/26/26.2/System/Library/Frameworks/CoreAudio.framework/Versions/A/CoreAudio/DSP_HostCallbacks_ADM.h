@class NSString;

@interface DSP_HostCallbacks_ADM : NSObject <HAL_DSP_HostCallbacks>

@property (nonatomic) struct HostCallbacks { struct function<void (AudioObjectPropertyAddress)> { struct __value_func<void (AudioObjectPropertyAddress)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } propertyChangeCallback_; } hostCallbacks;
@property (nonatomic) void *owner;
@property (nonatomic) struct shared_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x1; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x2; unsigned int x3; } x0; } *mxCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
