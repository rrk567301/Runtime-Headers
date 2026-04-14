@interface _RSOrthographicDetector_DetectBox : NSObject {
    float _area;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) float confidence;
@property (nonatomic) int scale;
@property (nonatomic) int label;

- (id)description;
- (float)overlap:(id)a0;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(float)a1 scale:(int)a2 label:(int)a3;

@end
