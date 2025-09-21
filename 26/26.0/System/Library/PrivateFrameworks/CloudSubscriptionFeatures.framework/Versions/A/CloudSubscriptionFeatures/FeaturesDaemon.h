@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (void)start;
- (id)init;
- (void).cxx_destruct;

@end
