@interface PegasusConfiguration.ConfigFactoryInternal : NSObject <PegasusConfiguration.ConfigFactory>

- (id)init;
- (id)loadWithUrl:(id)a0 userAgent:(id)a1 userDefaults:(id)a2;
- (id)loadWithData:(id)a0 userAgent:(id)a1 userDefaults:(id)a2;

@end
