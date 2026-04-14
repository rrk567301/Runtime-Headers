@interface ICNFIMAPClientIDOperation : ICNFIMAPSingleClientOperation

- (id)activityString;
- (id)init;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
