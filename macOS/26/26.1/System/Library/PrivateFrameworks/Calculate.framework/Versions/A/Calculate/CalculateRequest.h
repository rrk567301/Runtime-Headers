@class NSString, NSDictionary, CalculateResult, NSError;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_unlock;
+ (void)_lock;
+ (id)serialQueue;

- (void)evaluate;
- (void)finish;
- (void)cancel;
- (void).cxx_destruct;
- (void)update;

@end
