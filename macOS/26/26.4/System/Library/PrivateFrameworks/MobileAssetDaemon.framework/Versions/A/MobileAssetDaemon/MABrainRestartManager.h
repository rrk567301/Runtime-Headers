@class NSObject;
@protocol OS_dispatch_queue;

@interface MABrainRestartManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationsQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)setupSignalHandlers;
- (void)handleSignal:(int)a0;
- (void)quiesceAndRestartMobileAsset;
- (void)quiesceMobileAsset;

@end
