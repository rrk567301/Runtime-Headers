@class NSString, ACAccount;
@protocol AMSBagProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface AMSMediaRestrictionsSetupTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (copy) NSString *editToken;
@property (weak) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlSessionDelegate;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 editToken:(id)a1 bag:(id)a2;
- (id)performWithRestrictions:(id)a0;

@end
