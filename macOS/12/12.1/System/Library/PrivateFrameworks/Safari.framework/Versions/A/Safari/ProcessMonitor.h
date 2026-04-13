@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ProcessMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) int processIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProcessName:(id)a0;
- (void)waitForProcessToTerminateWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)waitForProcessToLaunchWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)_processWithIdentifierIsRunning:(int)a0;

@end
