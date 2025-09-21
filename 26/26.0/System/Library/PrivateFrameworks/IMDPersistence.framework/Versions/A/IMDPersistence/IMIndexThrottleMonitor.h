@class NSDictionary, NSNumber, NSDate;

@interface IMIndexThrottleMonitor : NSObject

@property (class, nonatomic) long long lastThrottleState;
@property (class, retain, nonatomic) NSDictionary *throttles;
@property (class, readonly, nonatomic) BOOL isThrottled;
@property (class, readonly, nonatomic) NSDate *dateOfThrottlingCompletion;

@property (retain, nonatomic) NSNumber *lastState;
@property (readonly, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) BOOL isThrottled;

+ (id)defaults;

- (id)init;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
