@class NSDictionary, NSString;

@interface WiFiUsagePlatformConfig : NSObject

@property (retain) NSDictionary *config;
@property (retain) NSString *platform;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWith:(id)a0 platform:(id)a1 key:(id)a2;

@end
