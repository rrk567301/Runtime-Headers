@class _WKUserInitiatedAction, NSString, WKNavigation, NSURL, NSURLRequest, _WKHitTestResult, WKFrameInfo;

@interface WKNavigationAction : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationAction> { struct type { unsigned char __lx[3184]; } data; } _navigationAction;
}

@property (readonly, nonatomic) NSURL *_originalURL;
@property (readonly, nonatomic, getter=_isUserInitiated) char _userInitiated;
@property (readonly, nonatomic) char _canHandleRequest;
@property (readonly, nonatomic) char _shouldOpenExternalSchemes;
@property (readonly, nonatomic) char _shouldOpenAppLinks;
@property (readonly, nonatomic) char _shouldPerformDownload;
@property (readonly, nonatomic) NSString *_targetFrameName;
@property (readonly, nonatomic) char _shouldOpenExternalURLs;
@property (readonly, nonatomic) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, nonatomic) char _isContentExtensionRedirect;
@property (readonly, nonatomic) char _isRedirect;
@property (readonly, nonatomic) WKNavigation *_mainFrameNavigation;
@property (readonly, nonatomic) _WKHitTestResult *_hitTestResult;
@property (readonly, nonatomic) char _hasOpener;
@property (readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property (readonly, copy, nonatomic) WKFrameInfo *targetFrame;
@property (readonly, nonatomic) long long navigationType;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) char shouldPerformDownload;
@property (readonly, nonatomic) unsigned long long modifierFlags;
@property (readonly, nonatomic) long long buttonNumber;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_storeSKAdNetworkAttribution;

@end
