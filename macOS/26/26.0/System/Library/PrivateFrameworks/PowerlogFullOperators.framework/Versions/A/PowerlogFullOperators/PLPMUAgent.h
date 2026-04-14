@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (void)logEventPointSensors;

@end
