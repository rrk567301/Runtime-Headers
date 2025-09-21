@class NSString, MCActivityMonitor;

@interface MCMonitoredOperation : NSOperation

@property (retain, nonatomic) MCActivityMonitor *parentMonitor;
@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (readonly, copy, nonatomic) NSString *activityString;

- (void)main;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)executeOperation;

@end
