@interface SNTwoPassConfiguration : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ firstPassRequest;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ secondPassRequest;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ historicalDataAmount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFirstPassRequest:(id)a0 secondPassRequest:(id)a1 historicalDataAmount:(double)a2;

@end
