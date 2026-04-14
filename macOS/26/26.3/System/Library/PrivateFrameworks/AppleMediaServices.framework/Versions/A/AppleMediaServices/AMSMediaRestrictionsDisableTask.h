@class NSString, ACAccount;
@protocol AMSBagProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface AMSMediaRestrictionsDisableTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (copy) NSString *editToken;
@property (weak) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlSessionDelegate;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 editToken:(id)a1 bag:(id)a2;

@end
