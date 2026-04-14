@class AMSUIBubbleTipInlineAnchorInfo, NSString, NSImage, AMSUIBubbleTipAppearance, AMSBinaryPromise, AMSDialogRequest;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBubbleTipViewController : NSViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIBubbleTipAppearance *requestAppearance;
@property BOOL isSelfSizing;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (retain) AMSBinaryPromise *loadPromise;
@property (retain) AMSUIBubbleTipAppearance *preferredAppearance;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)initWithRequest:(id)a0;
- (void)_startObservations;
- (long long)_primaryImageRenderingMode;
- (void)_didTapActionButton:(id)a0;
- (void)enqueueImpressionMetrics;
- (id)messageView;
- (void)_setDialogRequest:(id)a0;
- (void)_setImageWithURL:(id)a0;
- (void)_preloadImageIfNeeded;
- (void)_updateTextWithAttributes;
- (id)_messageLabelAttributes;
- (id)_titleLabelAttributes;
- (void)_commitAppearance;
- (void)enqueueImpressionEngagementMetrics;
- (void)_notifyMetricsFields:(id)a0;
- (void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)a0;
- (void)_endObservations;
- (unsigned long long)_messageViewStyle;

@end
