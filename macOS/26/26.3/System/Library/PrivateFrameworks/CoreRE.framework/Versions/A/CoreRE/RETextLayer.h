@interface RETextLayer : CALayer

@property (nonatomic) struct __CFAttributedString { } *attributedString;
@property (nonatomic) struct EdgeInsets { float top; float left; float bottom; float right; } edgeInsets;
@property (copy, nonatomic) id /* block */ renderBlock;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
