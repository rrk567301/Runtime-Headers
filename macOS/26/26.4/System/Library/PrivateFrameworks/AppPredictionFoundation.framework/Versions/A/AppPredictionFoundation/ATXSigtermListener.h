@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)_notifyObserversOfSigterm;
- (void)registerObserver:(id)a0;

@end
