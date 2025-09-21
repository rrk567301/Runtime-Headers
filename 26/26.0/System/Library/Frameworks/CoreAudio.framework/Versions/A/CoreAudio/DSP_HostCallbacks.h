@class NSString;

@interface DSP_HostCallbacks : NSObject <HAL_DSP_HostCallbacks>

@property (nonatomic) struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)> { struct __value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mutationRequestListener;
@property (nonatomic) struct function<void (const AudioObjectPropertyAddress &)> { struct __value_func<void (const AudioObjectPropertyAddress &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } propertyChangeListener;
@property (nonatomic) struct DSP_Host_IOProcessor { void /* function */ **x0; } *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;

@end
