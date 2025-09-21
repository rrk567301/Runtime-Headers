@interface HDDataCollectorConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long collectionType;
@property (readonly, nonatomic) double collectionInterval;
@property (readonly, nonatomic) double collectionLatency;

+ (id)configurationWithType:(unsigned long long)a0 aggregatorConfiguration:(id)a1;
+ (id)configurationWithType:(unsigned long long)a0 interval:(double)a1 latency:(double)a2;
+ (id)disabledConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mergedConfiguration:(id)a0;

@end
