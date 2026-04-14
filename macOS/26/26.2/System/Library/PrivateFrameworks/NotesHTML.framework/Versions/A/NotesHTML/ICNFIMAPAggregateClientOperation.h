@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (long long)composition;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOperations:(id)a0;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
