@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {
    char _isSyncDisabled;
    char _onlyMultiDevice;
    char _onlySingleDevice;
    char _requiresCharging;
    char _pushTriggersSync;
    char _additionsCountTowardTriggeredSyncBucket;
    char _deletionsCountTowardTriggeredSyncBucket;
    char _additionTriggersImmediateSync;
    char _deletionTriggersImmediateSync;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    unsigned long long _periodicSyncCadenceInMinutes;
    unsigned long long _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}

@property (retain, nonatomic) NSDictionary *properties;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
