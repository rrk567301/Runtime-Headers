@class NSString, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HKWatchAppInstallationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void)unregisterObserver:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_queue_notifyObservers;
- (void)startObserving;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
