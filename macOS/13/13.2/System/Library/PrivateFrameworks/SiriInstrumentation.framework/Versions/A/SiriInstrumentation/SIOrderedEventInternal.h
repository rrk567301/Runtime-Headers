@interface SIOrderedEventInternal : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ logicalTimestamp;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tluEvent;

+ (id)deserializeFrom:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithLogicalTimestamp:(id)a0 tluEvent:(id)a1;

@end
