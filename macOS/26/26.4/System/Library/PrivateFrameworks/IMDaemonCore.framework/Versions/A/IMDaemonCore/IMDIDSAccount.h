@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (BOOL)multiplePhoneNumbersTiedToAccount;
- (void).cxx_destruct;
- (BOOL)canMakeDowngradeRoutingChecks;
- (id)accountDefaults;
- (id)description;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (void)writeAccountDefaults:(id)a0;

@end
