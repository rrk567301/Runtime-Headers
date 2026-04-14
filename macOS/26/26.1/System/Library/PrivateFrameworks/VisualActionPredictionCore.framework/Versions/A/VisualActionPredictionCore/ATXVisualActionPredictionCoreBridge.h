@class ATXVisualActionPredictionCoreServer;

@interface ATXVisualActionPredictionCoreBridge : NSObject {
    ATXVisualActionPredictionCoreServer *_server;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (id)init;

@end
