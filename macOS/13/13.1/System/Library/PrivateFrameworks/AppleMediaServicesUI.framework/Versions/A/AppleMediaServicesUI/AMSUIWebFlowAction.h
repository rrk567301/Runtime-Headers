@class NSString, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel;
@protocol AMSUIWebPageProvider;

@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) id actionData;
@property long long animationType;
@property BOOL deferredPresentation;
@property (retain) NSString *backgroundColor;
@property (retain) AMSUIWebLoadingPageModel *loadingPage;
@property (retain) NSDictionary *metrics;
@property struct CGSize { double width; double height; } modalWindowSize;
@property (retain) AMSUIWebNavigationBarModel *navigationBar;
@property long long popToRelativeIndex;
@property long long presentationType;
@property (retain) id<AMSUIWebPageProvider> replacementPage;
@property long long replacementType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (void)_runWithType:(long long)a0 options:(id)a1;

@end
