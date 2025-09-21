@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurchaseRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;

@end
