@interface ICNFIMAPClientCapabilityOperation : ICNFIMAPSingleClientOperation

- (id)activityString;
- (id)init;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)shouldSendAgainOnError;

@end
