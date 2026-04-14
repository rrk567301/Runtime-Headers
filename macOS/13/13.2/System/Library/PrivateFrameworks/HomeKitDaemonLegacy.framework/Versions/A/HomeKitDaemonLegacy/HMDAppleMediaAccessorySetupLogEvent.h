@class NSString, NSDictionary, NSError, NSNumber;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSNumber *role;
@property (readonly) unsigned long long setupStartTime;
@property (readonly) unsigned long long setupEndTime;
@property (readonly) unsigned long long accessoryAddEndTime;
@property (readonly) unsigned long long configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithRole:(long long)a0 setupStartTime:(unsigned long long)a1 setupEndTime:(unsigned long long)a2 accessoryAddEndTime:(unsigned long long)a3 configurationEndTime:(unsigned long long)a4 setupSessionError:(id)a5 category:(id)a6 retryCount:(unsigned long long)a7 firstSettingTime:(unsigned long long)a8 languageSettingTime:(unsigned long long)a9;

@end
