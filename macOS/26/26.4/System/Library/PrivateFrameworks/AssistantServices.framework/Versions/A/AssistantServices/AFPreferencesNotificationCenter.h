@class NSLock, NSMutableDictionary;

@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSLock *instanceLock;
    NSMutableDictionary *darwinRegistrationsByObserver;
    NSMutableDictionary *darwinRegistrationsByName;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)addObserverForDarwinName:(struct __CFString { } *)a0 usingBlock:(id /* block */)a1;

@end
