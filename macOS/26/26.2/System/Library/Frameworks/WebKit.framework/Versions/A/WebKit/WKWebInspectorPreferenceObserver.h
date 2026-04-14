@class NSUserDefaults;

@interface WKWebInspectorPreferenceObserver : NSObject {
    struct RetainPtr<NSUserDefaults> { NSUserDefaults *m_ptr; } m_userDefaults;
}

+ (id)sharedInstance;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
