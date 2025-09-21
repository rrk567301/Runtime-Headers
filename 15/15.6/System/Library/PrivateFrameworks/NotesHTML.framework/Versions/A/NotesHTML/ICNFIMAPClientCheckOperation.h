@interface ICNFIMAPClientCheckOperation : ICNFIMAPSingleClientOperation

- (id)activityString;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (char)shouldSendAgainOnError;

@end
