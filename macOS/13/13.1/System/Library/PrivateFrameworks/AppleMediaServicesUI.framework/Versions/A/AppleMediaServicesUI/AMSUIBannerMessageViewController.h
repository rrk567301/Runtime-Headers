@class NSString, NSImage, AMSUIBannerAppearance, AMSDialogRequest, AMSBinaryPromise;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBannerMessageViewController : NSViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIBannerAppearance *requestAppearance;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property (retain) AMSUIBannerAppearance *preferredAppearance;
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
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (void)_didTapActionButton:(id)a0;
- (void)_commitAppearance;
- (void)enqueueImpressionMetrics;
- (id)_messageLabelAttributes;
- (id)_titleLabelAttributes;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (id)messageView;
- (void)_setImageWithURL:(id)a0;
- (void)_preloadImageIfNeeded;
- (void)_updateTextWithAttributes;
- (void)enqueueImpressionEngagementMetrics;
- (void)_notifyMetricsFields:(id)a0;

@end
