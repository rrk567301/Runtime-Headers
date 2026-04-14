@interface ICNFIMAPAggregateFetchUIDOperation : ICNFIMAPAggregateClientOperation

@property unsigned int expectedSize;

- (id)initWithOperations:(id)a0;
- (id)activityString;
- (void)cleanupAfterCompletion;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)initWithOperations:(id)a0 expectedSize:(unsigned int)a1;

@end
