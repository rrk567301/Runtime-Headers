@class NSString, NSDictionary, NSMutableDictionary, ACAccount, NSNumber;

@interface AMSMetricsEvent : NSObject <NSCopying, NSSecureCoding, AMSEngagementEvent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalStateLock;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *clientEventID;
@property (readonly, nonatomic) NSDictionary *databaseEventBody;
@property (readonly, nonatomic) NSNumber *databasePID;
@property (readonly, nonatomic) char engagementEvent;
@property (readonly, nonatomic) NSDictionary *engagementMetrics;
@property (nonatomic) char checkDiagnosticsAndUsageSetting;
@property (copy, nonatomic) NSString *diagnosticsSubmissionBugType;
@property (readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property (nonatomic) char preventSampling;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (readonly, nonatomic) NSDictionary *underlyingDictionaryOverride;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic, getter=isAnonymous) char anonymous;
@property (copy, nonatomic) NSString *app;
@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (copy, nonatomic) NSString *canaryIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *eventTime;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (copy, nonatomic) NSString *osBuildVersion;
@property (copy, nonatomic) NSString *osName;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) char suppressEngagement;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (copy, nonatomic) NSString *topic;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buyParamsFromString:(id)a0;
+ (id)_buyParamsStringFromAuthenticationContext:(id)a0;
+ (id)_deepCopiedAndSanitizedTopLevelDictionaryFromDictionary:(id)a0;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)a0;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)a0 key:(id)a1 enforcingClassUsingKnownPropertiesClassMapping:(id)a2;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_topicFromAuthenticationContext:(id)a0;
+ (id)createEventFromAuthenticationContext:(id)a0 error:(id)a1;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)a0;
+ (id)sanitizedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTopic:(id)a0;
- (void)setProperty:(id)a0 forBodyKey:(id)a1;
- (id)_propertyForBodyKey:(id)a0 clientOnly:(char)a1;
- (id)_initWithSanitizedUnderlyingDictionary:(id)a0 account:(id)a1 databasePID:(id)a2;
- (id)_initWithUnderlyingDictionary:(id)a0 account:(id)a1 databasePID:(id)a2 addBasefields:(char)a3;
- (void)_setProperty:(id)a0 forBodyKey:(id)a1 clientOnly:(char)a2;
- (void)addClientIdentifier:(id)a0;
- (void)addPropertiesWithDictionary:(id)a0;
- (id)initForEngagement;
- (id)initWithDatabaseEventBody:(id)a0 account:(id)a1 databasePID:(id)a2;
- (id)initWithUnderlyingDictionary:(id)a0;
- (id)propertyForBodyKey:(id)a0;
- (void)removePropertiesForKeys:(id)a0;

@end
