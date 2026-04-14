@class WBSRemotelyUpdatableDataController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;

@end
