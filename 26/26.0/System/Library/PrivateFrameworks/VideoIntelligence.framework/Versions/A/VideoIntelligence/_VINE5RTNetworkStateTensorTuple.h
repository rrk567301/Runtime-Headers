@class VINTensorSurface;

@interface _VINE5RTNetworkStateTensorTuple : NSObject

@property (readonly, nonatomic) VINTensorSurface *networkInputTensor;
@property (readonly, nonatomic) VINTensorSurface *networkOutputTensor;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputTensor:(id)a0 outputTensor:(id)a1;

@end
