@interface CNTimestamped : NSObject

@property (readonly) id value;
@property (readonly) double timestamp;

+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;
+ (id /* block */)wrapTransformWithScheduler:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(double)a1;

@end
