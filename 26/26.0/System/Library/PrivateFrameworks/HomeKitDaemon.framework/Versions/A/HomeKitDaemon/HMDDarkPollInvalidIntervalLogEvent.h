@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDDarkPollInvalidIntervalLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long logType;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *interval;
@property (readonly, nonatomic) unsigned int minValueMinutes;
@property (readonly, nonatomic) unsigned int maxValueMinutes;
@property (readonly, nonatomic) unsigned char wolanVersion;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 interval:(id)a1 minValueMinutes:(unsigned int)a2 maxValueMinutes:(unsigned int)a3 wolanVersion:(unsigned char)a4 logType:(long long)a5;

@end
