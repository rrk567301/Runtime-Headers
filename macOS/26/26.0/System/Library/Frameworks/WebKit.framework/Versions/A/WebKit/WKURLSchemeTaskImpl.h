@class NSString, NSURLRequest, WKFrameInfo;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct AlignedStorage<WebKit::WebURLSchemeTask, 8UL> { struct Storage { unsigned char data[552]; } m_storage; } _urlSchemeTask;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _requestOnlyIfCached;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, copy, nonatomic) NSURLRequest *request;

- (void)didFinish;
- (void)dealloc;
- (id)init;
- (void)didFailWithError:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (void)didReceiveData:(id)a0;
- (void)_didPerformRedirection:(id)a0 newRequest:(id)a1;
- (void)_willPerformRedirection:(id)a0 newRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
