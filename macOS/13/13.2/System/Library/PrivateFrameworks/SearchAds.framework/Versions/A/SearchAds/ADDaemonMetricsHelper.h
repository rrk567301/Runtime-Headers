@class NSString;

@interface ADDaemonMetricsHelper : NSObject

@property (readonly, nonatomic) NSString *adamID;

- (void).cxx_destruct;
- (void)installCompleted;
- (id)initWithAdamID:(id)a0;
- (void)purchaseCompleted;
- (void)downloadInitiated;
- (void)downloadCompleted;

@end
