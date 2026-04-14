@class NSAttributedString;

@interface MKAttributionLabel : NSView {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    BOOL _useDarkText;
}

@property (nonatomic) unsigned long long mapType;
@property (nonatomic) long long displayStyle;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)sizeToFit;
- (void).cxx_destruct;
- (id)_attributesWithStroke:(BOOL)a0;
- (id)_labelTitle;
- (void)_prepareLabel;
- (void)_updateTextColor;

@end
