@class NSString, NSDictionary;

@interface STScreenTimePopulationCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL isScreenTimeEnabled;
@property (readonly) BOOL isShareAcrossDevicesEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
