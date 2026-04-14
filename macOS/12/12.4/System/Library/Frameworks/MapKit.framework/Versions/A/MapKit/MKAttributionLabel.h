@class NSAttributedString;

@interface MKAttributionLabel : NSView {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    BOOL _useDarkText;
}

@property (nonatomic) unsigned long long mapType;
@property (nonatomic) long long displayStyle;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)_updateTextColor;
- (void)_prepareLabel;
- (id)_labelTitle;
- (id)_attributesWithStroke:(BOOL)a0;

@end
