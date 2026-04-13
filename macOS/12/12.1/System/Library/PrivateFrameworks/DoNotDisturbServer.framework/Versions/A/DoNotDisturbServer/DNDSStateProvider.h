@class DNDState, DNDSModeConfigurationManager, DNDSStateProviderSystemSnapshot;

@interface DNDSStateProvider : NSObject {
    DNDSModeConfigurationManager *_modeConfigurationManager;
}

@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot;
@property (copy) DNDState *lastCalculatedState;

- (void).cxx_destruct;
- (id)initWithModeConfigurationManager:(id)a0;
- (id)recalculateStateForSnapshot:(id)a0;

@end
