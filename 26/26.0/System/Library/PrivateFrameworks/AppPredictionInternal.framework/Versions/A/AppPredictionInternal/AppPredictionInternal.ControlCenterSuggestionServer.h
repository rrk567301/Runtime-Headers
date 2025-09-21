@class _TtC21AppPredictionInternal29ControlCenterSuggestionServer;

@interface AppPredictionInternal.ControlCenterSuggestionServer : NSObject {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ uninstallNotification;
}

@property (class, nonatomic, readonly) _TtC21AppPredictionInternal29ControlCenterSuggestionServer *sharedInstance;

- (id)init;
- (BOOL)startAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (void)updateControlsCacheWithCompletionHandler:(void (^)(void))a0;

@end
