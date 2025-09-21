@class NSString, NSDictionary, CalculateResult, NSError;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_lock;
+ (void)_unlock;
+ (id)serialQueue;

- (void)cancel;
- (void)finish;
- (void)update;
- (void)evaluate;
- (void).cxx_destruct;

@end
