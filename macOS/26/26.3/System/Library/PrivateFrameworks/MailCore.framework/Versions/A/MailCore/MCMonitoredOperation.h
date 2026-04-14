@class NSString, MCActivityMonitor;

@interface MCMonitoredOperation : NSOperation

@property (retain, nonatomic) MCActivityMonitor *parentMonitor;
@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (readonly, copy, nonatomic) NSString *activityString;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)dealloc;
- (void)executeOperation;

@end
