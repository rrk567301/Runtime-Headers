@class NSString, NSDictionary, HMMultiUserSettingsForMetrics;

@interface HMDMultiUserSettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) HMMultiUserSettingsForMetrics *multiUserSettings;


- (void).cxx_destruct;
- (id)initWithMultiUserSettings:(id)a0;

@end
