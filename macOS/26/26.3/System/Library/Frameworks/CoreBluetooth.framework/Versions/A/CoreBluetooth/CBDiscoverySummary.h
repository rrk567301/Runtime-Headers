@interface CBDiscoverySummary : NSObject <CUXPCCodable>

@property (nonatomic) double scanTime;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (id)descriptionWithLevel:(int)a0;

@end
