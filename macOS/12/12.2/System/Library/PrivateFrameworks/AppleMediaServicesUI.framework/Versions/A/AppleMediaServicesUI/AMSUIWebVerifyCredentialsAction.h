@class NSString, ACAccount;

@interface AMSUIWebVerifyCredentialsAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) ACAccount *account;
@property (retain) NSString *buttonText;
@property BOOL ephemeral;
@property long long serviceType;
@property (retain) NSString *serviceIdentifier;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;
@property BOOL usernameEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_serviceTypeFromType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
