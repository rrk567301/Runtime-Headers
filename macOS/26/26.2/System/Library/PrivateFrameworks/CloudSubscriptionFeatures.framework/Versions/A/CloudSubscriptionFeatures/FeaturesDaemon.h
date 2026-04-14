@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
