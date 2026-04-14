@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (long long)composition;
- (id)initWithOperations:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
