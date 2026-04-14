@class NSAffineTransform;

@interface NSTextSelectionRect : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) NSAffineTransform *transform;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
