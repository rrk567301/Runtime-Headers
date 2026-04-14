@class ICNFMCSaslClient;

@interface ICNFIMAPClientAuthenticateOperation : ICNFIMAPSingleClientOperation

@property (readonly, nonatomic) ICNFMCSaslClient *saslClient;
@property BOOL includeInitialResponse;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)initWithSaslClient:(id)a0;
- (id)debugCommandString;

@end
