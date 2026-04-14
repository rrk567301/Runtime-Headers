@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation

@property (readonly, copy, nonatomic) NSArray *operations;

- (id)initWithOperations:(id)a0;
- (long long)composition;
- (void).cxx_destruct;
- (id)init;
- (void)setGateway:(id)a0;
- (void)cleanupAfterCompletion;

@end
