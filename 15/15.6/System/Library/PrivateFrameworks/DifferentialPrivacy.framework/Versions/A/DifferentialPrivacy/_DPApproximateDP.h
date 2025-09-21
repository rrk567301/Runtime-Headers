@interface _DPApproximateDP : NSObject

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double delta;

+ (char)isValidDelta:(double)a0 error:(id *)a1;
+ (char)isValidEpsilon:(double)a0 error:(id *)a1;

- (id)description;
- (char)exceed:(id)a0;
- (id)initWithEpsilon:(double)a0 delta:(double)a1 error:(id *)a2;

@end
