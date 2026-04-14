@class AMSUIDashboardMessageAppearance, NSString, NSImage, AMSBinaryPromise, AMSDialogRequest;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIDashboardMessageViewController : NSViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIDashboardMessageAppearance *requestAppearance;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property (retain) AMSUIDashboardMessageAppearance *preferredAppearance;
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

@end
