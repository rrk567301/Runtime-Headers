@class NSObject;
@protocol OS_dispatch_queue;

@interface CSOSTransactionStat : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int numTransactionNow;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (int)numTransaction;
- (void)reportCreation;
- (void)reportDestroy;

@end
