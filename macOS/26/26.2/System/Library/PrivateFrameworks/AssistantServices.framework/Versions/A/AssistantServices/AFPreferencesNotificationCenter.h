@class NSLock, NSMutableDictionary;

@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSLock *instanceLock;
    NSMutableDictionary *darwinRegistrationsByObserver;
    NSMutableDictionary *darwinRegistrationsByName;
}

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)addObserverForDarwinName:(struct __CFString { } *)a0 usingBlock:(id /* block */)a1;

@end
