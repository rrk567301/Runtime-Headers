@class NSUUID, NSString, NSDictionary, NSDate, NSNumber;

@interface CKEventMetricInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *metricUUID;
@property (readonly, nonatomic) char isCKInternalMetric;
@property (readonly, nonatomic) char isPushTriggerFired;
@property (readonly, nonatomic) char allowsCellularAccess;
@property (readonly, nonatomic) char allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) char preferAnonymousRequests;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, copy, nonatomic) NSNumber *privacyProxyFailClosedOverride;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDate *startTime;
@property (readonly, copy, nonatomic) NSDate *endTime;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *associatedOperations;
@property (readonly, copy, nonatomic) NSDictionary *associatedOperationGroups;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventMetric:(id)a0;

@end
