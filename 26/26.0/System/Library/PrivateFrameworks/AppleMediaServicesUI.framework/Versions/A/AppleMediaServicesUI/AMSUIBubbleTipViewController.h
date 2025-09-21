@class AMSUIBubbleTipInlineAnchorInfo, NSString, AMSUIBubbleTipAppearance, AMSBinaryPromise;

@interface AMSUIBubbleTipViewController : AMSUIBaseMessageViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController>

@property (retain) AMSUIBubbleTipAppearance *requestAppearance;
@property BOOL isSelfSizing;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (retain) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (retain) AMSUIBubbleTipAppearance *preferredAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long engagementImpressionsReportingFrequency;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithRequest:(id)a0;
- (void)dealloc;
- (id)_titleFont;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_startObservations;
- (id)_titleTextColor;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (void)_endObservations;
- (long long)_iconAnimationPlayCount;
- (id)_messageFont;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
