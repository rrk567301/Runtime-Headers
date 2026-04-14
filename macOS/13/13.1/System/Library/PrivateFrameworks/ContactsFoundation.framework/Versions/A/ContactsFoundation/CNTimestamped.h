@interface CNTimestamped : NSObject

@property (readonly) id value;
@property (readonly) double timestamp;

+ (id /* block */)wrapTransformWithScheduler:(id)a0;
+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 timestamp:(double)a1;

@end
