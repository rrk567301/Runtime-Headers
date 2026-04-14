@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (void)setBuffer:(id)a0;
- (id)get;
- (id)buffer;
- (void)clear;
- (void)setChanged:(BOOL)a0;
- (id)description;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
