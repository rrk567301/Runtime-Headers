@class BMStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMStream *_computedModeStream;
}

- (void)_donateEventForStateUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleStateUpdate:(id)a0;

@end
