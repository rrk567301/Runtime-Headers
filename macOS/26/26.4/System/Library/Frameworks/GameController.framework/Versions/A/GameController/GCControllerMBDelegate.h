@interface GCControllerMBDelegate : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)stopScan;
- (void)startScan;
- (void).cxx_destruct;
- (void)fireCompletionHandler;

@end
