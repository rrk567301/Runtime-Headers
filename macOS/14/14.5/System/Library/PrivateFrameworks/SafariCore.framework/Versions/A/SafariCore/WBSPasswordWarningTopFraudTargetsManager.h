@class WBSRemotelyUpdatableDataController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;

@end
