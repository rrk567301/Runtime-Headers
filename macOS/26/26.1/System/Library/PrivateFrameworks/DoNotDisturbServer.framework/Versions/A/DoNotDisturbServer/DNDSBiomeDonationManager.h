@class BMStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMStream *_computedModeStream;
}

- (void)handleStateUpdate:(id)a0;
- (void).cxx_destruct;
- (void)_donateEventForStateUpdate:(id)a0;
- (id)init;

@end
