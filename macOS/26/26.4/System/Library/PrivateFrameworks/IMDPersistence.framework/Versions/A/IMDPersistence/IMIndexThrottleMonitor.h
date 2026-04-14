@class NSDictionary, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, IMIndexThrottleStorage;

@interface IMIndexThrottleMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumber *lastState;
@property (readonly, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) id<IMIndexThrottleStorage> storage;
@property (nonatomic) long long lastThrottleState;
@property (retain, nonatomic) NSDictionary *throttles;
@property (retain, nonatomic) NSDictionary *historicalThrottles;
@property (readonly, nonatomic) BOOL isThrottled;
@property (readonly, nonatomic) NSDate *dateOfThrottlingCompletion;

- (void)reload;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)_unlockedReload;
- (void)_unlockedCancel;
- (id)initWithChangeHandler:(id /* block */)a0 storage:(id)a1;

@end
