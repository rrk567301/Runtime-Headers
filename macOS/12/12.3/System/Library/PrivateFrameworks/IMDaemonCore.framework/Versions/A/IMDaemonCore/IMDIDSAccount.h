@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (void)dealloc;
- (id)description;
- (void)writeAccountDefaults:(id)a0;
- (id)accountDefaults;
- (BOOL)canMakeDowngradeRoutingChecks;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;

@end
