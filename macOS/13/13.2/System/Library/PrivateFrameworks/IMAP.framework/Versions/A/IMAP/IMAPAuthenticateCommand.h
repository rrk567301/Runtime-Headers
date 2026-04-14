@class ECSASLClient;

@interface IMAPAuthenticateCommand : IMAPSingleCommand

@property (readonly, nonatomic) ECSASLClient *saslClient;
@property BOOL includeInitialResponse;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (id)initWithSASLClient:(id)a0;
- (id)debugCommandStringWithAccount:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
