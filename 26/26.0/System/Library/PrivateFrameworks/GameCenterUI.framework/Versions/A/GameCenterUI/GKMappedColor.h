@class NSColor;

@interface GKMappedColor : NSDynamicNamedColor

@property (readonly, nonatomic) NSColor *originalColor;
@property (readonly, nonatomic) id /* block */ transformBlock;

- (id)resolvedColor;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginalColor:(id)a0 transformBlock:(id /* block */)a1;

@end
