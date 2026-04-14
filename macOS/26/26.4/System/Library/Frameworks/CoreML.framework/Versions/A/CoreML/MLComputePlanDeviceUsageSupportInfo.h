@protocol MLComputeDeviceProtocol;

@interface MLComputePlanDeviceUsageSupportInfo : NSObject

@property (readonly, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (id)description;
- (id)initWithComputeDevice:(id)a0 supportState:(long long)a1;

@end
