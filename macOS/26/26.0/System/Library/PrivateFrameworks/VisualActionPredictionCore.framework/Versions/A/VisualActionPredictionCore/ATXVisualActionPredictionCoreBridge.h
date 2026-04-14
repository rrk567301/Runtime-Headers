@class ATXVisualActionPredictionCoreServer;

@interface ATXVisualActionPredictionCoreBridge : NSObject {
    ATXVisualActionPredictionCoreServer *_server;
}

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void).cxx_destruct;

@end
