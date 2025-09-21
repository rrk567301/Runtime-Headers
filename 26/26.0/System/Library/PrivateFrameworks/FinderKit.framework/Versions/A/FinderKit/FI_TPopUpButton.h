@interface FI_TPopUpButton : NSPopUpButton {
    struct TriStateBool { unsigned char fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
}

@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) double widthPadding;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)initCommon;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)awakeCommon;

@end
