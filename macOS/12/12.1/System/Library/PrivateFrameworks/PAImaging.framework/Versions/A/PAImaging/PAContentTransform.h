@interface PAContentTransform : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } inverseTransform;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleViewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } integralVisibleViewContentBounds;

+ (id)contentTransformWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 origin:(struct CGPoint { double x0; double x1; })a2 anchor:(struct CGPoint { double x0; double x1; })a3 contentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 contentPointToAlign:(struct CGPoint { double x0; double x1; })a5;
+ (id)contentTransformWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 originPoint:(struct CGPoint { double x0; double x1; })a2 anchorPoint:(struct CGPoint { double x0; double x1; })a3 contentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 contentPointToAlign:(struct CGPoint { double x0; double x1; })a5;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_contentTransformWithScale:(double)a0 originPoint:(struct CGPoint { double x0; double x1; })a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;

- (id)description;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithContentExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })contentPointToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointFromContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointToContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentPointFromViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectToViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectToContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectFromContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectFromViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentRegionToViewRegion:(id)a0;
- (id)viewRegionToContentRegion:(id)a0;

@end
