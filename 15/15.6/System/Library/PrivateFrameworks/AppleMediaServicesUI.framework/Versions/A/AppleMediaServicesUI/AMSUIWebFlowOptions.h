@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel;

@interface AMSUIWebFlowOptions : NSObject

@property char animated;
@property (retain) NSString *backgroundColor;
@property char deferredPresentation;
@property char disableTimeout;
@property char reuseExistingPage;
@property (retain) AMSUIWebLoadingPageModel *loadingPage;
@property long long modalPresentationStyle;
@property long long modalTransitionStyle;
@property struct CGSize { double width; double height; } modalWindowSize;
@property (retain) AMSUIWebNavigationBarModel *navigationBar;
@property (retain) NSDictionary *pageData;
@property char suppressErrorPage;

- (void).cxx_destruct;

@end
