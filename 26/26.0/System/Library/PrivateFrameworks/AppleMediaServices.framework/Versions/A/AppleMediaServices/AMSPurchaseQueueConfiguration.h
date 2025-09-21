@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly) id<AMSBagProtocol> bag;
@property (retain) id<AMSPurchaseResponseProtocol> delegate;
@property (retain) Class purchaseTaskClass;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;

@end
