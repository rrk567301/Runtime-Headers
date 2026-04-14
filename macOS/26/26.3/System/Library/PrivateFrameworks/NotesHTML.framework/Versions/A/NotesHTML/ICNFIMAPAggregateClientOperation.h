@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (id)initWithOperations:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)composition;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
