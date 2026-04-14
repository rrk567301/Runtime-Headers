@class NSString, NSDictionary, CalculateResult, NSError;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_lock;
+ (id)serialQueue;
+ (void)_unlock;

- (void).cxx_destruct;
- (void)finish;
- (void)update;
- (void)cancel;
- (void)evaluate;

@end
