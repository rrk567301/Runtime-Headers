@class AMSBinaryPromise, NSString, AMSUIDashboardMessageAppearance;

@interface AMSUIDashboardMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain) AMSUIDashboardMessageAppearance *requestAppearance;
@property (retain) AMSUIDashboardMessageAppearance *preferredAppearance;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (id)_messageLabelAttributes;
- (unsigned long long)_messageStyle;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)_titleLabelAttributes;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
