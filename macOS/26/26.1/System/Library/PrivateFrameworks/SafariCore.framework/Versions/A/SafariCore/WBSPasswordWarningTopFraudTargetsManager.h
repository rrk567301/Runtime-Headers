@class WBSRemotelyUpdatableDataController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;

@end
