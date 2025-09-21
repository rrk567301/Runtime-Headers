@interface RETextLayer : CALayer

@property (nonatomic) struct __CFAttributedString { } *attributedString;
@property (nonatomic) struct EdgeInsets { float top; float left; float bottom; float right; } edgeInsets;
@property (copy, nonatomic) id /* block */ renderBlock;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
