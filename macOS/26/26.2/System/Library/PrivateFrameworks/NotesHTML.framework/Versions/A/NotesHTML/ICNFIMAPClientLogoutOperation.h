@interface ICNFIMAPClientLogoutOperation : ICNFIMAPSingleClientOperation

- (id)activityString;
- (id)init;
- (BOOL)alwaysAllowToComplete;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;

@end
