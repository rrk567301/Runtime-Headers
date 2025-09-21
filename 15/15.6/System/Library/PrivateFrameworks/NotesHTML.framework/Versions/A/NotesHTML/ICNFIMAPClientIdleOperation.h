@interface ICNFIMAPClientIdleOperation : ICNFIMAPSingleClientOperation

- (id)init;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;

@end
