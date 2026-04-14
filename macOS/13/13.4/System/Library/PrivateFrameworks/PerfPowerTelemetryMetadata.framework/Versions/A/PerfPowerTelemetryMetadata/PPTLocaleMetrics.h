@class NSString;

@interface PPTLocaleMetrics : NSObject <PPTMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)timezoneMetrics;
+ (id)allDeclMetrics;
+ (id)timezoneLoggingCadence;


@end
