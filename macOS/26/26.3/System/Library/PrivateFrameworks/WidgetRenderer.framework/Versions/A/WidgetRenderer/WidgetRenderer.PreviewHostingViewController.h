@class CHSInlineTextParameters;

@interface WidgetRenderer.PreviewHostingViewController : WidgetRenderer.BaseWidgetContentViewController {
    void /* unknown type, empty encoding */ requiresStrictViewFraming;
}

@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic) BOOL metricsDefineSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
