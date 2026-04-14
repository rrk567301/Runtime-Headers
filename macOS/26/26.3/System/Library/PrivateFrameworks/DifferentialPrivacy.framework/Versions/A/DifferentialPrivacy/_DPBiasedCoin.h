@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (id)initWithBias:(double)a0;
- (id)description;
- (id)init;
- (unsigned char)generateByte;
- (BOOL)flip;

@end
