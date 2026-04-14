@class ICNFMCSaslClient;

@interface ICNFIMAPClientAuthenticateOperation : ICNFIMAPSingleClientOperation

@property (readonly, nonatomic) ICNFMCSaslClient *saslClient;
@property BOOL includeInitialResponse;

- (id)activityString;
- (void).cxx_destruct;
- (id)init;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)debugCommandString;
- (id)initWithSaslClient:(id)a0;

@end
