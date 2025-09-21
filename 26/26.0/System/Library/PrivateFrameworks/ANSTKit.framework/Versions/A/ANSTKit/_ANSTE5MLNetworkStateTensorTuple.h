@class ANSTTensorSurface;

@interface _ANSTE5MLNetworkStateTensorTuple : NSObject

@property (readonly, nonatomic) ANSTTensorSurface *networkInputTensor;
@property (readonly, nonatomic) ANSTTensorSurface *networkOutputTensor;

- (void).cxx_destruct;
- (id)initWithInputTensor:(id)a0 outputTensor:(id)a1;

@end
