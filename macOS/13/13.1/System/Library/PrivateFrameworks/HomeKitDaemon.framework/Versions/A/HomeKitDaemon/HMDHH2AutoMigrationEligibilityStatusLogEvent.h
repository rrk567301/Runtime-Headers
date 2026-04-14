@class NSString, NSDictionary;

@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long currentUserAutoMigrationEligibilityStatus;
@property (readonly) long long currentUserAutoMigrationByOwnerEligibilityStatus;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (id)initWithAutoMigrationEligibilityStatus:(long long)a0 autoMigrationEligibilityStatusByOwner:(long long)a1;

@end
