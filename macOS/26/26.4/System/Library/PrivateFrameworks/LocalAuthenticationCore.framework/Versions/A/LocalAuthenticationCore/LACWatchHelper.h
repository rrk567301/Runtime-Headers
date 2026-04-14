@class LACBackgroundTask, SFAutoUnlockManager;

@interface LACWatchHelper : NSObject {
    LACBackgroundTask *_eligibleDevicesBackgroundTask;
    SFAutoUnlockManager *_sharingManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_eligibleDevicesWithCompletion:(id /* block */)a0;
- (id)eligibleDevicesBackgroundTask;
- (id)watchDatabaseHashWithError:(id *)a0;

@end
