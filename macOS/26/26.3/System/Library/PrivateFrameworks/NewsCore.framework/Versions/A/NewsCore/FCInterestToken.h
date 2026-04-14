@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;

- (id)init;
- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
