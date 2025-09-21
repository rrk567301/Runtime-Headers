@class NSString, NSMutableDictionary, NSUUID, NSDate, NSNumber;

@interface CKEventMetric : NSObject <NSSecureCoding> {
    char _hasBeenSubmitted;
    char _inferredAllowsCellular;
    char _inferredAllowsExpensive;
    char _inferredPreferAnonymousRequests;
    NSUUID *_metricUUID;
    long long _inferredDatabaseScope;
    NSString *_inferredDeviceIdentifier;
    NSString *_inferredSourceApplicationBundleIdentifier;
    NSString *_inferredApplicationBundleIdentifierOverrideForContainerAccess;
    NSString *_inferredApplicationBundleIdentifierOverrideForNetworkAttribution;
    NSNumber *_inferredPrivacyProxyFailClosedOverride;
    NSString *_inferredSourceApplicationSecondaryIdentifier;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) char isCKInternalMetric;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (copy) NSDate *startTime;
@property (copy) NSDate *endTime;
@property char isPushTriggerFired;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithEventName:(id)a0;
- (char)associateWithCompletedOperation:(id)a0;
- (void)setMetricValue:(id)a0 forKey:(id)a1;
- (id)generateEventMetricInfo;
- (id)initWithEventName:(id)a0 atTime:(id)a1;

@end
