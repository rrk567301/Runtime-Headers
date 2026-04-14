@interface GCControllerMBDelegate : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)stopScan;
- (void).cxx_destruct;
- (void)startScan;
- (void)fireCompletionHandler;

@end
