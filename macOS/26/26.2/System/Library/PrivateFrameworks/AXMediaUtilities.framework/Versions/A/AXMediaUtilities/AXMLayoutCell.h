@class AXMVisionFeature;

@interface AXMLayoutCell : AXMLayoutItem {
    AXMVisionFeature *_feature;
}

+ (id)sequence:(id)a0;

- (void).cxx_destruct;
- (id)feature;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
