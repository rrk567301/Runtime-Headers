@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (id)accountDefaults;
- (BOOL)canMakeDowngradeRoutingChecks;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)description;
- (void).cxx_destruct;
- (void)writeAccountDefaults:(id)a0;

@end
