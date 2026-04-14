@class DaemonController;

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
