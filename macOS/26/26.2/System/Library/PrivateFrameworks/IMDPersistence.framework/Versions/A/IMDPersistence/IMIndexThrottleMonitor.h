@class NSDictionary, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface IMIndexThrottleMonitor : NSObject

@property (class, nonatomic) long long lastThrottleState;
@property (class, retain, nonatomic) NSDictionary *throttles;
@property (class, retain, nonatomic) NSDictionary *historicalThrottles;
@property (class, readonly, nonatomic) BOOL isThrottled;
@property (class, readonly, nonatomic) NSDate *dateOfThrottlingCompletion;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumber *lastState;
@property (readonly, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) BOOL isThrottled;

+ (id)defaults;

- (void)reload;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)__unlocked_cancel;
- (void)__unlocked_reload;

@end
