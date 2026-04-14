@class AMSBinaryPromise, NSString, NSImage, NSImageSymbolConfiguration, NSDictionary, AMSDialogRequest, AMSUIMessageView;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBaseMessageViewController : NSViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property (readonly) NSImageSymbolConfiguration *_effectiveImageSymbolConfiguration;
@property BOOL _isLoadingImage;
@property (retain) NSImage *_loadedImage;
@property (readonly) unsigned long long _messageStyle;
@property (readonly) AMSUIMessageView *_messageView;
@property (readonly) NSDictionary *_messageLabelAttributes;
@property (readonly) NSDictionary *_titleLabelAttributes;
@property (readonly) long long _primaryImageRenderingMode;
@property (weak) id<AMSUIMessageViewControllerDelegate> delegate;
@property (readonly) AMSDialogRequest *dialogRequest;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
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
- (void)_setDialogRequest:(id)a0;
- (void)_didTapActionButton:(id)a0;
- (void)_commitAppearance;
- (void)enqueueImpressionMetrics;
- (void)_setImageWithURL:(id)a0;
- (void)_preloadImageIfNeeded;
- (void)_updateTextWithAttributes;
- (void)enqueueImpressionEngagementMetrics;
- (void)_notifyMetricsFields:(id)a0;

@end
