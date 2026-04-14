@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (id)buffer;
- (void)clear;
- (void)setBuffer:(id)a0;
- (id)get;
- (id)description;
- (void)setChanged:(BOOL)a0;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
