@class BMUserFocusComputedModeStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMUserFocusComputedModeStream *_computedModeStream;
}

- (id)init;
- (void).cxx_destruct;
- (void)_donateEventForStateUpdate:(id)a0;
- (void)handleStateUpdate:(id)a0;

@end
