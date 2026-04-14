@class QLTBitmapImage;

@interface QLTRenderedIcon : NSObject

@property (retain, nonatomic) QLTBitmapImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
