@class STScreenTimeConfigurationObserver;

@interface WKScreenTimeConfigurationObserver : NSObject {
    struct RetainPtr<STScreenTimeConfigurationObserver> { STScreenTimeConfigurationObserver *m_ptr; } _screenTimeConfigurationObserver;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
}

- (void)stopObserving;
- (id)initWithView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObserving;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)enforcesChildRestrictions;

@end
