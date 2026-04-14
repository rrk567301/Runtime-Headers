@class NSString, NSDictionary;

@interface STShadowMigrationDidStartCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;


@end
