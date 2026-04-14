@class AMSMetricsEvent, NSString, NSArray, AMSUIWebClientContext, AMSUIWebAction, NSNumber, AMSUIWebNavigationBarModel;

@interface AMSUIWebDiagnosticsPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property (retain) NSString *sessionToken;
@property (retain) NSArray *requiredSerialNumbers;
@property (retain) NSArray *selectableSerialNumbers;
@property (retain) NSNumber *destination;
@property (retain) NSString *flowSessionID;
@property (retain) NSString *flowSerialNumber;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) AMSUIWebAction *swipeToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
