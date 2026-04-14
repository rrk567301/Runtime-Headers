@class NSString, NSURLRequest, WKFrameInfo;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct AlignedStorage<WebKit::WebURLSchemeTask, 8UL> { struct Storage { unsigned char data[600]; } m_storage; } _urlSchemeTask;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _requestOnlyIfCached;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, copy, nonatomic) NSURLRequest *request;

- (void)didReceiveResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didReceiveData:(id)a0;
- (void)didFinish;
- (id)init;
- (void)dealloc;
- (void)_didPerformRedirection:(id)a0 newRequest:(id)a1;
- (struct Ref<WebKit::WebURLSchemeTask, WTF::RawPtrTraits<WebKit::WebURLSchemeTask>, WTF::DefaultRefDerefTraits<WebKit::WebURLSchemeTask>> { struct WebURLSchemeTask *x0; })_protectedURLSchemeTask;
- (void)_willPerformRedirection:(id)a0 newRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
