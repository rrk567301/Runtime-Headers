@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDLPMInvalidConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long logType;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *maxSupportedLpmVersion;
@property (readonly, nonatomic) NSNumber *accessoryLpmVersion;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)initWithAccessory:(id)a0 maxSupportedLpmVersion:(id)a1 accessoryLpmVersion:(id)a2;

@end
