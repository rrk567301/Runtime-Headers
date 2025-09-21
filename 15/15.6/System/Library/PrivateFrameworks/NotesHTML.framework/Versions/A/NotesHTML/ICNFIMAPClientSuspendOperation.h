@interface ICNFIMAPClientSuspendOperation : ICNFIMAPClientOperation

@property char shouldExecuteSynchronously;

- (id)init;
- (char)alwaysAllowToComplete;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;

@end
