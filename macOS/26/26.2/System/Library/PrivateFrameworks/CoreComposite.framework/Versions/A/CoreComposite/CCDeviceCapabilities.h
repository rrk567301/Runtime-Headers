@interface CCDeviceCapabilities : NSObject

@property (readonly, nonatomic) BOOL deviceSupportsVRR;
@property (readonly, nonatomic) BOOL deviceSupportsTier2ArgumentBuffers;
@property (readonly, nonatomic) long long mtlGPUFamily;

@end
