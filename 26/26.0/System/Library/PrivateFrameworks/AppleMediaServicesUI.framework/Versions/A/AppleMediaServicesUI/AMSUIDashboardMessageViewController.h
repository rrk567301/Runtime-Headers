@class AMSBinaryPromise, NSString, AMSUIDashboardMessageAppearance;

@interface AMSUIDashboardMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain) AMSUIDashboardMessageAppearance *requestAppearance;
@property (retain) AMSUIDashboardMessageAppearance *preferredAppearance;
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
- (id)_messageFont;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
