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
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)debugCommandString;

@end
