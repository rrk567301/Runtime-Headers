@class NSString, MCActivityMonitor;

@interface MCMonitoredOperation : NSOperation

@property (retain, nonatomic) MCActivityMonitor *parentMonitor;
@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (readonly, copy, nonatomic) NSString *activityString;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)executeOperation;

@end
