@interface RTStateModelEarliestLatestEl : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double earliestEl_s;
@property (nonatomic) double latestEl_s;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEarliest:(double)a0 andLatest:(double)a1;

@end
