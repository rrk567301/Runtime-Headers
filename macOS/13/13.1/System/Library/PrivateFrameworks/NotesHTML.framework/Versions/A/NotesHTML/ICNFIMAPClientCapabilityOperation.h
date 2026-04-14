@interface ICNFIMAPClientCapabilityOperation : ICNFIMAPSingleClientOperation

- (id)init;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (BOOL)shouldSendAgainOnError;

@end
