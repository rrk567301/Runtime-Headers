@class ACAccount;
@protocol AMSBagProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface AMSMediaRestrictionsVerifyProfileLockTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (weak) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlSessionDelegate;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)performWithPasscode:(id)a0;

@end
