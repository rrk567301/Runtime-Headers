@class NSString, NSDictionary;

@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) char downtimeEnabled;
@property (readonly) char gracePeriodUsed;
@property (readonly) char scheduleEnabled;
@property (readonly) long long hourOfDay;
@property (readonly) char userIsManaged;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
