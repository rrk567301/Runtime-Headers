@class NSString, AMSUIAccountMessageAppearance, AMSBinaryPromise;

@interface AMSUIAccountMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property BOOL didAnimateFirstImpression;
@property (retain) AMSUIAccountMessageAppearance *requestAppearance;
@property (retain) AMSUIAccountMessageAppearance *preferredAppearance;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (long long)_impressionAnimationStyle;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (void)_commitAppearance;
- (id)_messageLabelAttributes;
- (id)_titleLabelAttributes;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (unsigned long long)_messageStyle;

@end
