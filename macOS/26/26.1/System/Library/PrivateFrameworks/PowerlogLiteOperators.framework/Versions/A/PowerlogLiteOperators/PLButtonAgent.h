@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionActionButtonSelection;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;

- (void)initOperatorDependancies;
- (void)logEventBackwardTrackPadPower;
- (void)log;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
