@class NSObject, NSMutableArray, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface DCBGSTaskController : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSUserDefaults *defaultsSuite;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *expiryQueue;

+ (id)sharedInstance;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)fetchTaskForTaskIdentifier:(id)a0;
- (void)handleTask:(id)a0 shouldExit:(BOOL *)a1;
- (BOOL)registerForTask:(id)a0;
- (BOOL)updateTaskWithIdentifier:(id)a0 withRefreshInterval:(double)a1;

@end
