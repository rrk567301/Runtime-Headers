@class STScreenTimeConfigurationObserver;

@interface WKScreenTimeConfigurationObserver : NSObject {
    struct RetainPtr<STScreenTimeConfigurationObserver> { STScreenTimeConfigurationObserver *m_ptr; } _screenTimeConfigurationObserver;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
}

- (id)initWithView:(id)a0;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (BOOL)enforcesChildRestrictions;

@end
