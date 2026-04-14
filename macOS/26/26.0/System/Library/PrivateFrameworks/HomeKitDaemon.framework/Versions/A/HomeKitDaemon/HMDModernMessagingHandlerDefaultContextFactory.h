@class HMDAccountRegistry;

@interface HMDModernMessagingHandlerDefaultContextFactory : NSObject <HMDModernMessagingHandlerContextFactory>

@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;

- (id)deviceForAddress:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (void).cxx_destruct;
- (id)createContextForRequestID:(id)a0;

@end
