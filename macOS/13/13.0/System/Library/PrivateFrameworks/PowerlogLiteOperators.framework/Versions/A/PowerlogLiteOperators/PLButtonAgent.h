@class PLEntryNotificationOperatorComposition;

@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionTrackpadPowerState;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (unsigned int)getValue:(unsigned int)a0 inHIDReportBuffer:(char *)a1 withBufferSize:(long long)a2;
- (void)logEventBackwardTrackPadPower;

@end
