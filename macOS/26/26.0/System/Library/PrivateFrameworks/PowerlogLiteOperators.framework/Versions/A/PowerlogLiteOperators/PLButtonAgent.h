@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionActionButtonSelection;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (id)init;
- (void)logEventBackwardTrackPadPower;
- (void).cxx_destruct;

@end
