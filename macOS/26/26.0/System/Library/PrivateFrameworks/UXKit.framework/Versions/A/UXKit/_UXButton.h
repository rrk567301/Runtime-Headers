@class NSMutableDictionary;

@interface _UXButton : NSButton {
    NSMutableDictionary *_titlesByState;
    NSMutableDictionary *_titleAttributesByState;
}

+ (Class)cellClass;

- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)_attributedStringForState:(unsigned long long)a0;
- (id)_textColorForState:(unsigned long long)a0;
- (void)setTitleAttributes:(id)a0 forState:(unsigned long long)a1;

@end
