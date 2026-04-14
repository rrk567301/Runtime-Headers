@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchBlock;
@property (retain, nonatomic) id sentinel;
@property (nonatomic) long long maskValue;
@property (nonatomic) long long compareValue;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithSentinel:(id)a0 mask:(long long)a1 compare:(long long)a2 fetchResult:(id /* block */)a3;
- (id)initWithNeedsPushTo:(unsigned long long)a0 result:(id /* block */)a1;
- (id)initWithSentinel:(id)a0 needsPushTo:(unsigned long long)a1 fetchResult:(id /* block */)a2;
- (id)initWithAlreadyPushedTo:(unsigned long long)a0 result:(id /* block */)a1;
- (id)initWithSentinel:(id)a0 alreadyPushedTo:(unsigned long long)a1 fetchResult:(id /* block */)a2;

@end
