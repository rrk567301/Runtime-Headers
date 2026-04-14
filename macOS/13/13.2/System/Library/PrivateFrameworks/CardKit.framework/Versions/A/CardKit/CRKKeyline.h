@class NSView;

@interface CRKKeyline : NSView {
    NSView *_keylineView;
}

@property (readonly) long long type;
@property (readonly) long long direction;
@property (readonly) unsigned long long visualEffectStyle;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithType:(long long)a0 direction:(long long)a1 visualEffectStyle:(unsigned long long)a2;
- (double)_roundedKeylineThickness;
- (double)defaultKeylineInsetForCurrentDevice;

@end
