@class _TtC21AppPredictionInternal29ControlCenterSuggestionServer;

@interface AppPredictionInternal.ControlCenterSuggestionServer : NSObject {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ uninstallNotification;
}

@property (class, nonatomic, readonly) _TtC21AppPredictionInternal29ControlCenterSuggestionServer *sharedInstance;

- (void).cxx_destruct;
- (BOOL)startAndReturnError:(id *)a0;
- (id)init;
- (void)updateControlsCacheWithCompletionHandler:(void (^)(void))a0;

@end
