@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (id)accountDefaults;
- (BOOL)canMakeDowngradeRoutingChecks;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)description;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (void)writeAccountDefaults:(id)a0;
- (void).cxx_destruct;

@end
