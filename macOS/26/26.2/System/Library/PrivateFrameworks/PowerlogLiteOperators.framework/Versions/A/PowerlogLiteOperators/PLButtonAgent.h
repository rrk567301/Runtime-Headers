@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionActionButtonSelection;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;

- (void)initOperatorDependancies;
- (void)log;
- (void).cxx_destruct;
- (void)logEventBackwardTrackPadPower;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (id)init;

@end
