@class NSString;

@interface WKUserDefaults : NSUserDefaults {
    struct RetainPtr<NSString> { NSString *m_ptr; } m_suiteName;
    struct WeakObjCPtr<WKPreferenceObserver> { id m_weakReference; } m_observer;
}

- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0;
- (void)findPreferenceChangesAndNotifyForKeys:(id)a0 toValuesForKeys:(id)a1;

@end
