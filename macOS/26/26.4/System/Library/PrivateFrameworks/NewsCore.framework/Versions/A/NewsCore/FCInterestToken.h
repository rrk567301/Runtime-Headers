@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
- (void)dealloc;

@end
