@class AMSBinaryPromise, NSString, AMSUIToastAppearance;

@interface AMSUIToastViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain) AMSUIToastAppearance *requestAppearance;
@property (retain) AMSUIToastAppearance *preferredAppearance;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
