@class AMSUIBubbleTipInlineAnchorInfo, NSString, NSImage, AMSUIBubbleTipAppearance, AMSBinaryPromise, AMSDialogRequest;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBubbleTipViewController : NSViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIBubbleTipAppearance *requestAppearance;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
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
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)initWithRequest:(id)a0;
- (void)_startObservations;
- (void)_preloadImageIfNeeded;
- (void)_setDialogRequest:(id)a0;
- (void)_commitAppearance;
- (id)messageView;
- (void)enqueueImpressionMetrics;
- (void)_updateTextWithAttributes;
- (void)_didTapActionButton:(id)a0;
- (void)_setImageWithURL:(id)a0;
- (id)_titleLabelAttributes;
- (id)_messageLabelAttributes;
- (void)_endObservations;
- (unsigned long long)_messageViewStyle;

@end
