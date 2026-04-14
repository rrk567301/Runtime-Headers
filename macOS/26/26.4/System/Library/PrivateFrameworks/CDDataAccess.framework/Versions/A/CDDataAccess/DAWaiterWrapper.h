@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject

@property (retain, nonatomic) id<DADataclassLockWatcher> waiter;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long dataclasses;
@property (readonly, nonatomic) int waiterNum;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
