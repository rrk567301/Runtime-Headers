@class NSString, ACAccount;

@interface AMSAccountsChangedResult : NSObject <AMSHashable>

@property (readonly) ACAccount *account;
@property (readonly) NSString *hashedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end
