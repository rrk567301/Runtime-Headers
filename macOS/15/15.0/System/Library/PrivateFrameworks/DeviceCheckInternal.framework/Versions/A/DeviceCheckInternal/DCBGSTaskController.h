@class NSMutableArray, NSUserDefaults;

@interface DCBGSTaskController : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSUserDefaults *defaultsSuite;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)fetchTaskForTaskIdentifier:(id)a0;
- (void)handleTask:(id)a0;
- (BOOL)registerForTask:(id)a0;
- (BOOL)updateTaskWithIdentifier:(id)a0 withRefreshInterval:(double)a1;

@end
