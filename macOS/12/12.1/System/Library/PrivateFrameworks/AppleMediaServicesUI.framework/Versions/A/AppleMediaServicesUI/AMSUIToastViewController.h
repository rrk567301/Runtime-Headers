@class NSString, NSImage, AMSUIToastAppearance, AMSDialogRequest, AMSBinaryPromise;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIToastViewController : NSViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIToastAppearance *requestAppearance;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property (retain) AMSBinaryPromise *loadPromise;
@property (retain) AMSUIToastAppearance *preferredAppearance;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)initWithRequest:(id)a0;
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

@end
