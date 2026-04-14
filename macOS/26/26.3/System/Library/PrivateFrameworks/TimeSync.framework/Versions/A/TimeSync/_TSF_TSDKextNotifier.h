@class NSMutableArray;

@interface _TSF_TSDKextNotifier : _TSF_TSDIOKServiceMatcher {
    NSMutableArray *_matchNotificationsArray;
    NSMutableArray *_terminateNotificationsArray;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyWhenServiceIsUnavailable:(id /* block */)a0;
- (void)serviceMatched:(id)a0;
- (void)notifyWhenServiceIsAvailable:(id /* block */)a0;
- (void)serviceTerminated:(id)a0;

@end
