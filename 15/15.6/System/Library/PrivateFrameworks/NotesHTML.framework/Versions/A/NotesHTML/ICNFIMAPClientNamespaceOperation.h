@class NSString, NSArray;
@protocol ICNFIMAPAccount;

@interface ICNFIMAPClientNamespaceOperation : ICNFIMAPSingleClientOperation

@property (retain, nonatomic) id<ICNFIMAPAccount> account;
@property (copy, nonatomic) NSString *separatorChar;
@property (copy, nonatomic) NSArray *privateNamespaces;
@property (copy, nonatomic) NSArray *publicNamespaces;
@property (copy, nonatomic) NSArray *sharedNamespaces;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (id)initWithAccount:(id)a0 separatorChar:(id)a1;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (char)shouldSendAgainOnError;

@end
