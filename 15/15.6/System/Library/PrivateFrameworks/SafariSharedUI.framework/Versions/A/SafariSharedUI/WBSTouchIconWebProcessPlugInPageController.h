@protocol WBSTouchIconObserver;

@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSTouchIconObserver> _touchIconObserver;
    unsigned long long _mainFrameMainResourceId;
    char _didRecieveDidHandleOnloadEventsForFrameCallback;
    char _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
}

@property (readonly, nonatomic) id<WBSTouchIconObserver> touchIconObserver;

- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didHandleOnloadEventsForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didInitiateLoadForResource:(unsigned long long)a2 request:(id)a3 pageIsProvisionallyLoading:(char)a4;
- (id)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 willSendRequestForResource:(unsigned long long)a2 request:(id)a3 redirectResponse:(id)a4;
- (id)_extractFaviconURLsIncludingDefaultURLs:(char)a0 didExtractNonDefaultIconURLs:(char *)a1;
- (id)_extractTouchIconURLsIncludingDefaultURLs:(char)a0 didExtractNonDefaultIconURLs:(char *)a1;

@end
