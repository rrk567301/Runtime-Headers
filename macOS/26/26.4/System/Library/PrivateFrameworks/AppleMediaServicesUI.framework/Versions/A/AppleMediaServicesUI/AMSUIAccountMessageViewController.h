@class NSString, AMSUIAccountMessageAppearance, AMSBinaryPromise;

@interface AMSUIAccountMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property BOOL didAnimateFirstImpression;
@property (retain) AMSUIAccountMessageAppearance *requestAppearance;
@property (retain) AMSUIAccountMessageAppearance *preferredAppearance;
@property unsigned long long engagementImpressionsReportingFrequency;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (id)_titleFont;
- (void).cxx_destruct;
- (id)_titleTextColor;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (long long)_impressionAnimationStyle;
- (id)_messageFont;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
