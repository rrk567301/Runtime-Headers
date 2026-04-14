@class MFEWSGetItemsResponseOperation;

@interface MFEWSSuppressReadReceiptsRequestOperation : MFEWSRequestOperation

@property (readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse;

- (void).cxx_destruct;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (id)initWithGetItemsResponse:(id)a0 gateway:(id)a1;

@end
