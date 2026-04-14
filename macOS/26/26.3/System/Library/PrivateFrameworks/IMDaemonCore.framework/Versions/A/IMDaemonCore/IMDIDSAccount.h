@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (BOOL)canMakeDowngradeRoutingChecks;
- (id)description;
- (void)writeAccountDefaults:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)accountDefaults;

@end
