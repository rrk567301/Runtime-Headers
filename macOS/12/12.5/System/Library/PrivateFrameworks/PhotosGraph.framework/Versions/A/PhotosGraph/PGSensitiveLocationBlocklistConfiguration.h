@class NSArray;

@interface PGSensitiveLocationBlocklistConfiguration : PGConfiguration

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSArray *sensitiveDateIntervals;

+ (id)sensitiveLocationBlocklist;
+ (id)sensitiveLocationBlocklistConfigurations;

- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;
- (id)resolveConfigurationDictionary:(id)a0;

@end
