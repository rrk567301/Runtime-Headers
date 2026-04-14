@interface GCControllerMBDelegate : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)startScan;
- (void)stopScan;
- (void).cxx_destruct;
- (void)fireCompletionHandler;

@end
