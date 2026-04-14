@class NSString, NSDictionary;

@interface CalculateScanRequest : NSObject

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_lock;
+ (void)_unlock;
+ (id)concurrentQueue;

- (void).cxx_destruct;
- (void)update;
- (void)cancel;

@end
