@class NSMutableDictionary;

@interface _UXButton : NSButton {
    NSMutableDictionary *_titlesByState;
    NSMutableDictionary *_titleAttributesByState;
}

+ (Class)cellClass;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)mouseUp:(id)a0;
- (void)tintColorDidChange;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setTitleAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)_attributedStringForState:(unsigned long long)a0;
- (id)_textColorForState:(unsigned long long)a0;

@end
