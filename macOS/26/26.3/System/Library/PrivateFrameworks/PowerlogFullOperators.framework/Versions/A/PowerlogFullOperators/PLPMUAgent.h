@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointSensors;

@end
