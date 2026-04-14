@class LPCaptionButtonPresentationProperties, LPButtonStyle, NSButton;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    NSButton *_button;
    NSButton *_collapsedButton;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (id)_createButton;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (id)_createCollapsedButton;

@end
