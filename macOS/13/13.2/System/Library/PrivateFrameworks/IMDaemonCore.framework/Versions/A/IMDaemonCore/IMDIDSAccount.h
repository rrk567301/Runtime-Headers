@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canMakeDowngradeRoutingChecks;
- (void)writeAccountDefaults:(id)a0;
- (id)accountDefaults;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (BOOL)multiplePhoneNumbersTiedToAccount;

@end
