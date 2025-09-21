@interface MTL4DebugCommandAllocator : MTL4ToolsCommandAllocator

@property (readonly, nonatomic) unsigned long long currentGeneration;

- (void)reset;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;

@end
