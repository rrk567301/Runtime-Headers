@class NSString, NSManagedObjectID;

@interface CalExchangeBasicAccountInfoProvider : NSObject <EWSExchangeServiceBindingTaskDelegate>

@property (copy, nonatomic) NSString *login;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSManagedObjectID *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)exchangeServiceBinding:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didFinishWithResponse:(id)a1;
- (void)exchangeServiceBinding:(id)a0 didFailWithError:(id)a1;
- (id)initWithLogin:(id)a0 password:(id)a1 sessionID:(id)a2;

@end
