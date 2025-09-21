@class _WKUserInitiatedAction, NSString, WKNavigation, NSURL, NSURLRequest, _WKHitTestResult, WKFrameInfo;

@interface WKNavigationAction : NSObject <WKObject> {
    struct AlignedStorage<API::NavigationAction, 16UL> { struct Storage { unsigned char data[3264]; } m_storage; } _navigationAction;
}

@property (readonly, nonatomic) NSURL *_originalURL;
@property (readonly, nonatomic, getter=_isUserInitiated) BOOL _userInitiated;
@property (readonly, nonatomic) BOOL _canHandleRequest;
@property (readonly, nonatomic) BOOL _shouldOpenExternalSchemes;
@property (readonly, nonatomic) BOOL _shouldOpenAppLinks;
@property (readonly, nonatomic) BOOL _shouldPerformDownload;
@property (readonly, nonatomic) NSString *_targetFrameName;
@property (readonly, nonatomic) BOOL _shouldOpenExternalURLs;
@property (readonly, nonatomic) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, nonatomic) BOOL _isRedirect;
@property (readonly, nonatomic) WKNavigation *_mainFrameNavigation;
@property (readonly, nonatomic) _WKHitTestResult *_hitTestResult;
@property (readonly, nonatomic) BOOL _hasOpener;
@property (readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property (readonly, copy, nonatomic) WKFrameInfo *targetFrame;
@property (readonly, nonatomic) long long navigationType;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) BOOL shouldPerformDownload;
@property (readonly, nonatomic) BOOL isContentRuleListRedirect;
@property (readonly, nonatomic) unsigned long long modifierFlags;
@property (readonly, nonatomic) long long buttonNumber;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
