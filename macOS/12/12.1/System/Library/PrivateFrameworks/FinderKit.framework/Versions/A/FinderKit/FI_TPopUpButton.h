@interface FI_TPopUpButton : NSPopUpButton {
    struct TriStateBool { int fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
}

@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) double widthPadding;

- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)initCommon;
- (void)awakeCommon;

@end
