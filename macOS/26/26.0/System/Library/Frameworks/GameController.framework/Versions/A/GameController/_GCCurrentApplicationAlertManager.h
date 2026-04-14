@class NSMutableSet;

@interface _GCCurrentApplicationAlertManager : NSObject {
    NSMutableSet *_observers;
    _Atomic long long _alertPresentationCount;
}

@property (readonly, getter=isAlertPresented) BOOL alertPresented;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 notifyCurrent:(BOOL)a1;
- (void)applicationDidDismissAlert;
- (void)applicationDidPresentAlert;

@end
