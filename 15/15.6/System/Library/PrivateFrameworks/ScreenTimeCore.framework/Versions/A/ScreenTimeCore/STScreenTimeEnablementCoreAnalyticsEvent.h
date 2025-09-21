@class NSString, NSDictionary;

@interface STScreenTimeEnablementCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) char screenTimeEnabled;
@property (readonly) long long userAgeGroup;
@property (readonly) long long numberOfGuardians;
@property (readonly) char pinSet;
@property (readonly) char userIsRemote;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
