@interface CHSWidgetIcon : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (nonatomic, retain) struct CGImage { } *image;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 pixelSize:(struct CGSize { double x0; double x1; })a3;

@end
