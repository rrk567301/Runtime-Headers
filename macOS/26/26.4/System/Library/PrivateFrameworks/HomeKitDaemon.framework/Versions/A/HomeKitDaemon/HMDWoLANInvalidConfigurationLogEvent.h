@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDWoLANInvalidConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long logType;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *maxSupportedWoLANVersion;
@property (readonly, nonatomic) NSNumber *wolanVersion;
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
- (id)initWithAccessory:(id)a0 maxSupportedWoLANVersion:(id)a1 wolanVersion:(id)a2;

@end
