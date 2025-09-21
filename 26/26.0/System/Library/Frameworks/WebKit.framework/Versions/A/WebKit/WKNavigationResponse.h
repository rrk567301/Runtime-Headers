@class WKNavigation, NSString, NSURLResponse, NSURLRequest, WKFrameInfo;

@interface WKNavigationResponse : NSObject <WKObject> {
    struct AlignedStorage<API::NavigationResponse, 8UL> { struct Storage { unsigned char data[512]; } m_storage; } _navigationResponse;
}

@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, nonatomic) WKFrameInfo *_navigationInitiatingFrame;
@property (readonly, nonatomic) WKNavigation *_navigation;
@property (readonly, nonatomic) NSURLRequest *_request;
@property (readonly, nonatomic) NSString *_downloadAttribute;
@property (readonly, nonatomic) BOOL _wasPrivateRelayed;
@property (readonly, nonatomic) NSString *_proxyName;
@property (readonly, nonatomic) BOOL _isFromNetwork;
@property (readonly, nonatomic, getter=isForMainFrame) BOOL forMainFrame;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) BOOL canShowMIMEType;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;

@end
