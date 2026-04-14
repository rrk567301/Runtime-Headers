@class NSObject, NSDate, SFApproveDiscovery;
@protocol OS_dispatch_queue;

@interface WatchMonitor : NSObject

@property (retain) SFApproveDiscovery *approveDiscovery;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastActivation;
@property (readonly, nonatomic) BOOL deviceAvailable;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_restartWithMinReactivationDelay:(double)a0;

@end
