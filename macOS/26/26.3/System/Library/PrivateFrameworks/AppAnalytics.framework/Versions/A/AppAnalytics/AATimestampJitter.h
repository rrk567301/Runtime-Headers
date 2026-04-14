@interface AATimestampJitter : NSObject

@property (class, nonatomic, readonly) AATimestampJitter *default;

@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

- (id)init;
- (void).cxx_destruct;
- (id)withLowerBound:(double)a0;
- (id)withUpperBound:(double)a0;
- (id)withEnabled:(BOOL)a0;

@end
