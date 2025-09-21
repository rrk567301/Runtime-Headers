@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;

- (void)dealloc;
- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
