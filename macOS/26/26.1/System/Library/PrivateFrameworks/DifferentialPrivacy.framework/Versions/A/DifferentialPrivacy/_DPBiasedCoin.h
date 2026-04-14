@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (unsigned char)generateByte;
- (id)description;
- (id)initWithBias:(double)a0;
- (BOOL)flip;
- (id)init;

@end
