@class NSString, NSURL;

@interface WKObservablePageState : NSObject <_WKObservablePageState> {
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { struct WebPageProxy *m_ptr; } _page;
    struct RefPtr<WebKit::PageLoadStateObserver, WTF::RawPtrTraits<WebKit::PageLoadStateObserver>, WTF::DefaultRefDerefTraits<WebKit::PageLoadStateObserver>> { struct PageLoadStateObserver *m_ptr; } _observer;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) double estimatedProgress;
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly, nonatomic) BOOL _webProcessIsResponsive;
@property (readonly, nonatomic) NSURL *unreachableURL;
@property (readonly, nonatomic) struct __SecTrust { } *serverTrust;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPage:(void *)a0;

@end
