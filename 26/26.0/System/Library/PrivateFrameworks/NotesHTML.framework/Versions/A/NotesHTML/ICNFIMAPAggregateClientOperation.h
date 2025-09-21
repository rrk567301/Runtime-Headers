@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (long long)composition;
- (id)initWithOperations:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
