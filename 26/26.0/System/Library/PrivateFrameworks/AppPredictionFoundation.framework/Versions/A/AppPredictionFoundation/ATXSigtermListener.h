@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)_notifyObserversOfSigterm;
- (void).cxx_destruct;

@end
