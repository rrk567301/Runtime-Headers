@interface ICNFIMAPAggregateFetchUIDOperation : ICNFIMAPAggregateClientOperation

@property unsigned int expectedSize;

- (id)activityString;
- (id)initWithOperations:(id)a0;
- (id)commandTypeString;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (void)cleanupAfterCompletion;
- (id)initWithOperations:(id)a0 expectedSize:(unsigned int)a1;

@end
