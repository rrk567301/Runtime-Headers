@interface VideosUI.SidebarHeaderCellView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ editButton;
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ tapGestureWorkItem;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)voiceOverStatusDidChange;
- (void)handleEditButtonTap;

@end
