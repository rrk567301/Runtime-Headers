@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (id)description;
- (void).cxx_destruct;
- (id)accountDefaults;
- (char)canMakeDowngradeRoutingChecks;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (char)multiplePhoneNumbersTiedToAccount;
- (void)writeAccountDefaults:(id)a0;

@end
