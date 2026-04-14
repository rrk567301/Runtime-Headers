@class NSColor;

@interface GKMappedColor : NSDynamicNamedColor

@property (readonly, nonatomic) NSColor *originalColor;
@property (readonly, nonatomic) id /* block */ transformBlock;

- (void).cxx_destruct;
- (id)resolvedColor;
- (id)description;
- (id)initWithOriginalColor:(id)a0 transformBlock:(id /* block */)a1;

@end
