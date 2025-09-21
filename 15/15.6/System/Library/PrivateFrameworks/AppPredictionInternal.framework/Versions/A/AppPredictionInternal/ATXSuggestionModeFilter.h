@class ATXDNDModeConfigurationClient, BPSSink, BMBiomeScheduler, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXSuggestionModeFilter : NSObject {
    _PASLock *_lock;
    ATXDNDModeConfigurationClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_updateConfigurationWithModeUUID:(id)a0 notifyingObservers:(char)a1;
- (char)currentModeConfigurationAllowsBundleId:(id)a0;
- (char)currentModeConfigurationAllowsSuggestion:(id)a0;
- (void)registerForModeChanges;

@end
