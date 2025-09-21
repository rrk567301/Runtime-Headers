@interface ICNFIMAPClientLogoutOperation : ICNFIMAPSingleClientOperation

- (id)init;
- (id)activityString;
- (char)alwaysAllowToComplete;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;

@end
