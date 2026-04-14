@interface _ATXMovingAverage : NSObject <NSSecureCoding> {
    double _movingAverage;
    double _movingError;
    long long _count;
    double _alpha;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double movingAverage;
@property (readonly, nonatomic) double movingError;

- (void)addElement:(double)a0;
- (id)initWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
