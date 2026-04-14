@interface IMAPAggregateGetQuotaRootCommand : IMAPAggregateCommand

- (id)activityString;
- (id)commandTypeString;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (BOOL)shouldSendAgainOnError;

@end
