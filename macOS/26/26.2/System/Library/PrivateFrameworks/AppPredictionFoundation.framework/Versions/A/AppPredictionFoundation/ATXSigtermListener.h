@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)_notifyObserversOfSigterm;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
