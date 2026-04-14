@interface SIOrderedEventInternal : PBCodable

@property (nonatomic, retain) void /* unknown type, empty encoding */ logicalTimestamp;
@property (nonatomic, retain) void /* unknown type, empty encoding */ tluEvent;

+ (id)deserializeFrom:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithLogicalTimestamp:(id)a0 tluEvent:(id)a1;

@end
