@class NSString, NSDictionary;

@interface STShadowMigrationErrorCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL isShareAcrossDevicesEnabled;
@property (readonly) BOOL isManaged;
@property (readonly) long long error;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
