@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;
+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
