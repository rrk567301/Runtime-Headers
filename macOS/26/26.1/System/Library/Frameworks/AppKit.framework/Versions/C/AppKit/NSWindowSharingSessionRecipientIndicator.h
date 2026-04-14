@class NSView, NSWidgetView;

@interface NSWindowSharingSessionRecipientIndicator : NSView {
    NSWidgetView *_widgetView;
    NSView *_aquaduckView;
    long long _style;
}

@property (copy, nonatomic) id /* block */ positionSharingIndicatorCallback;

- (void)layout;
- (void)invalidateIntrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_coreUIDrawOptions;
- (id)initWithIndicatorStyle:(long long)a0;

@end
