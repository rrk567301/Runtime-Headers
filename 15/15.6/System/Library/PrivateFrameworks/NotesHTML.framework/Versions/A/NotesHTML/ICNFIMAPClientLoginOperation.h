@class NSString;

@interface ICNFIMAPClientLoginOperation : ICNFIMAPSingleClientOperation

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *quotedUsername;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (id)debugCommandString;

@end
