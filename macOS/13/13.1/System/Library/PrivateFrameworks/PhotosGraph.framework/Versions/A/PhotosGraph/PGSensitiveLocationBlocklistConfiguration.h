@class NSArray;

@interface PGSensitiveLocationBlocklistConfiguration : PGConfiguration

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSArray *sensitiveDateIntervals;

+ (id)dateFormatter;
+ (id)resolveConfigurationDictionary:(id)a0;
+ (id)sensitiveLocationBlocklist;
+ (id)sensitiveLocationBlocklistConfigurations;
+ (BOOL)isSensitiveLocation:(id)a0 duringDateInterval:(id)a1;
+ (BOOL)dateInterval:(id)a0 intersectsSensitiveDateIntervals:(id)a1;
+ (BOOL)isAssetAtSensitiveLocationAndDate:(id)a0;
+ (id)unobfuscatedBlocklistFromObfuscatedBlocklist:(id)a0;
+ (id)obfuscatedBlocklistFromUnobfuscatedBlocklist:(id)a0;
+ (id)sensitiveLocationBlocklistLocal;
+ (id)sensitiveLocationBlocklistConfigurationsLocal;

- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;

@end
