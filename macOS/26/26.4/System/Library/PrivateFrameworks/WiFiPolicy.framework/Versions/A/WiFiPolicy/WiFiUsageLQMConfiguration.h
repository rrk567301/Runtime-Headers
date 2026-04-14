@class NSString;

@interface WiFiUsageLQMConfiguration : WiFiUsageConfiguration <WiFiUsageConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)getConfigForKey:(id)a0;
+ (void)setConfig:(id)a0;


@end
