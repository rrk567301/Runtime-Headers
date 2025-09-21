@interface _ATXMovingAverage : NSObject <NSSecureCoding> {
    double _movingAverage;
    double _movingError;
    long long _count;
    double _alpha;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double movingAverage;
@property (readonly, nonatomic) double movingError;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addElement:(double)a0;
- (id)initWithAlpha:(double)a0;

@end
