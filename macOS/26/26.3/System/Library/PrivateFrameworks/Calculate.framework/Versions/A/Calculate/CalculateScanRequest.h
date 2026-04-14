@class NSString, NSDictionary;

@interface CalculateScanRequest : NSObject

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (id)concurrentQueue;
+ (void)_unlock;
+ (void)_lock;

- (void)cancel;
- (void)update;
- (void).cxx_destruct;

@end
