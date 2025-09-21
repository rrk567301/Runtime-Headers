@class ICNFMCSaslClient;

@interface ICNFIMAPClientAuthenticateOperation : ICNFIMAPSingleClientOperation

@property (readonly, nonatomic) ICNFMCSaslClient *saslClient;
@property char includeInitialResponse;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (id)debugCommandString;
- (id)initWithSaslClient:(id)a0;

@end
