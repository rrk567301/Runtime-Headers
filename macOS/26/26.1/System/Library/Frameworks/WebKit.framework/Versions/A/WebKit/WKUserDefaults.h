@class NSString;

@interface WKUserDefaults : NSUserDefaults {
    struct RetainPtr<NSString> { NSString *m_ptr; } m_suiteName;
    struct WeakObjCPtr<WKPreferenceObserver> { id m_weakReference; } m_observer;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0;
- (void)findPreferenceChangesAndNotifyForKeys:(id)a0 toValuesForKeys:(id)a1;

@end
