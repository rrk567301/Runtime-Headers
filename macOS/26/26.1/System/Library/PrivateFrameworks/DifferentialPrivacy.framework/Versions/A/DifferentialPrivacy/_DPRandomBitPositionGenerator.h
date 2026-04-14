@interface _DPRandomBitPositionGenerator : NSObject

@property (readonly, nonatomic) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)a0;

- (id)description;
- (unsigned long long)sample;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)a0;

@end
