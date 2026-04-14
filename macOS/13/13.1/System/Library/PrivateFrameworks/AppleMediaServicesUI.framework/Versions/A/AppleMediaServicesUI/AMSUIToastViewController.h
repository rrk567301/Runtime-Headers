@class NSString, NSImage, AMSUIToastAppearance, AMSDialogRequest, AMSBinaryPromise;

@interface AMSUIToastViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property BOOL didEnqueueMetrics;
@property BOOL isLoadingImage;
@property (retain) NSImage *loadedImage;
@property (retain) AMSDialogRequest *request;
@property (retain) AMSUIToastAppearance *requestAppearance;
@property (retain) AMSUIToastAppearance *preferredAppearance;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (void)_commitAppearance;
- (id)_messageLabelAttributes;
- (id)_titleLabelAttributes;
- (id)_effectiveImageSymbolConfiguration;
- (unsigned long long)_messageStyle;

@end
