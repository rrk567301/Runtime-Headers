@interface ICNFIMAPClientStartTLSOperation : ICNFIMAPSingleClientOperation

- (id)init;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;

@end
