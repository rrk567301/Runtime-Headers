@class NSURL, ACAccount;
@protocol AMSBagProtocol;

@interface AMSCampaignAttributor : NSObject

@property (nonatomic, readonly) id<AMSBagProtocol> bag;
@property (nonatomic, retain) ACAccount *account;

- (id)init;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppBag:(id)a0;
- (void)processURL:(NSURL *)a0 ignoreMarketing:(BOOL)a1 completionHandler:(void (^)(NSURL *))a2;

@end
