@interface IMAPAggregateFetchUIDCommand : IMAPAggregateCommand

@property unsigned int expectedSize;

- (id)activityString;
- (id)commandTypeString;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (void)cleanupAfterCompletion;
- (id)initWithCommands:(id)a0;
- (id)initWithCommands:(id)a0 expectedSize:(unsigned int)a1;

@end
