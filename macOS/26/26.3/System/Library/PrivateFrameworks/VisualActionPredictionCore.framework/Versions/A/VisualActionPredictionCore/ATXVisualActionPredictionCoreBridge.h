@class ATXVisualActionPredictionCoreServer;

@interface ATXVisualActionPredictionCoreBridge : NSObject {
    ATXVisualActionPredictionCoreServer *_server;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;

@end
