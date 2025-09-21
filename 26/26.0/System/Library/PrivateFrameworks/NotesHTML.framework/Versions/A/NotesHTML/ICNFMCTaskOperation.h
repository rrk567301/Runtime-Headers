@class ICNFMCActivityMonitor;

@interface ICNFMCTaskOperation : NSBlockOperation

@property (retain) ICNFMCActivityMonitor *parentMonitor;
@property (retain) ICNFMCActivityMonitor *monitor;

+ (void)setTaskDescription:(const char *)a0;

- (void)main;
- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (void)setParentMonitor:(id)a0 taskName:(id)a1;
- (id)setTaskName:(id)a0 priority:(unsigned char)a1 canCancel:(BOOL)a2;

@end
