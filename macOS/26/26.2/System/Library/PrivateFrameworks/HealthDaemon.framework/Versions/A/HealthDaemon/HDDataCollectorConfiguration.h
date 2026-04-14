@interface HDDataCollectorConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long collectionType;
@property (readonly, nonatomic) double collectionInterval;
@property (readonly, nonatomic) double collectionLatency;

+ (id)configurationWithType:(unsigned long long)a0 aggregatorConfiguration:(id)a1;
+ (id)disabledConfiguration;
+ (id)configurationWithType:(unsigned long long)a0 interval:(double)a1 latency:(double)a2;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mergedConfiguration:(id)a0;
- (id)description;
- (id)init;

@end
