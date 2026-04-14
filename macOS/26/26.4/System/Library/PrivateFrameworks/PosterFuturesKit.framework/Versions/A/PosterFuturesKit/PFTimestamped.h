@interface PFTimestamped : NSObject

@property (readonly) id value;
@property (readonly) double timestamp;

+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;
+ (id /* block */)wrapTransformWithScheduler:(id)a0;

- (id)initWithValue:(id)a0 timestamp:(double)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
