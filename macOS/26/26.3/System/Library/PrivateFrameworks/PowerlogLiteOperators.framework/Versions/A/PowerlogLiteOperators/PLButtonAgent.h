@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionActionButtonSelection;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)log;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventBackwardTrackPadPower;

@end
