@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly) id<AMSBagProtocol> bag;
@property (retain) id<AMSPurchaseResponseProtocol> delegate;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;

@end
