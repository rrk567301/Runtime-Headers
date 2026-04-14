@class br_pacer, NSMutableDictionary, BRDarwinNotifyReceiver, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BRContainersMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_observedContainerIDsToLatestForegroundStatus;
    BRDarwinNotifyReceiver *_foregroundChangesReceiver;
    br_pacer *_foregroundChangesPacer;
}

+ (double)_darwinNotifyEventPacerDelay;
+ (id)_foregroundChangesSender;
+ (id)_userDefaultsForContainersNotifications;
+ (id)_userDefaultsSuiteForContainersNotifications;
+ (id)bundleIDFromPrimaryIdentifier:(id)a0 secondaryIdentifier:(id)a1;
+ (id)containerIDFromPrimaryIdentifier:(id)a0 secondaryIdentifier:(id)a1;
+ (BOOL)isContainerID:(id)a0;
+ (BOOL)isContainerIDForeground:(id)a0;
+ (void)notifyContainer:(id)a0 isForegroundState:(BOOL)a1;
+ (void)resetNotifications;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_scanForChanges;
- (void)_signalScanning;
- (void)_checkChangesForConainerID:(id)a0;
- (void)addObserver:(id)a0 forContainerID:(id)a1;
- (void)removeObserver:(id)a0 forContainerID:(id)a1;

@end
