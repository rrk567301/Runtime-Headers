@class BMStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMStream *_computedModeStream;
}

- (void)handleStateUpdate:(id)a0;
- (void)_donateEventForStateUpdate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
