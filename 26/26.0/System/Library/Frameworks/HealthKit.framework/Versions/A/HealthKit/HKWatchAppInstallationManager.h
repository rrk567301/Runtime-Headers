@class NSString, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HKWatchAppInstallationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (void)startObserving;
- (void)unregisterObserver:(id)a0;
- (void)stopObserving;
- (void)registerObserver:(id)a0;
- (void)_queue_notifyObservers;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
