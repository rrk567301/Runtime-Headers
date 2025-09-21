@class NSArray, NSUpActionSlider, NSMutableDictionary;

@interface NSTickLabelsView : NSView {
    NSUpActionSlider *fSlider;
    NSMutableDictionary *fTickLabelFontAttributes;
    NSArray *fTickLabels;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSlider:(id)a0;
- (void).cxx_destruct;
- (void)setFontAttributes:(id)a0;
- (void)setTickLabels:(id)a0;

@end
