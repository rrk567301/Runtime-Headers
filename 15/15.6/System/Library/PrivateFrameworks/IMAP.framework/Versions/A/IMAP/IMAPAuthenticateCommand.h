@class ECSASLClient;

@interface IMAPAuthenticateCommand : IMAPSingleCommand

@property (readonly, nonatomic) ECSASLClient *saslClient;
@property char includeInitialResponse;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (id)initWithSASLClient:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(char)a0;

@end
