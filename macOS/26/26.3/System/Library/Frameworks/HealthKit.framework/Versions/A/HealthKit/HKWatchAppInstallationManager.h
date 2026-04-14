@class NSString, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HKWatchAppInstallationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void)stopObserving;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)startObserving;
- (void)_queue_notifyObservers;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)registerObserver:(id)a0;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
