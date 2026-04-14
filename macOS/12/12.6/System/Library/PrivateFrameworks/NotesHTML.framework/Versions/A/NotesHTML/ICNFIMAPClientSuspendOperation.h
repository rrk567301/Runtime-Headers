@interface ICNFIMAPClientSuspendOperation : ICNFIMAPClientOperation

@property BOOL shouldExecuteSynchronously;

- (id)init;
- (id)commandTypeString;
- (long long)maxAllowedConnectionState;
- (BOOL)alwaysAllowToComplete;

@end
