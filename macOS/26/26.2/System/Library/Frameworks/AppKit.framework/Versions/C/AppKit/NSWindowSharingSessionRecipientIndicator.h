@class NSView, NSWidgetView;

@interface NSWindowSharingSessionRecipientIndicator : NSView {
    NSWidgetView *_widgetView;
    NSView *_aquaduckView;
    long long _style;
}

@property (copy, nonatomic) id /* block */ positionSharingIndicatorCallback;

- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)_coreUIDrawOptions;
- (id)initWithIndicatorStyle:(long long)a0;

@end
