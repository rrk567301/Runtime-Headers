@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitionActionButtonInteraction;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionActionButtonSelection;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardTrackPadPower;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
