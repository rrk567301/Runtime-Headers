@class CHSInlineTextParameters;

@interface WidgetRenderer.PreviewHostingViewController : WidgetRenderer.BaseWidgetContentViewController {
    void /* unknown type, empty encoding */ requiresStrictViewFraming;
}

@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic) BOOL metricsDefineSize;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
