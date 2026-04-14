@class NSString;
@protocol DSPHostCallbacks;

@interface ADMDSPHostCallbacks : NSObject <HAL_DSP_HostCallbacks> {
    id<DSPHostCallbacks> hostCallbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (id)initWithHostCallbacks:(id)a0;

@end
