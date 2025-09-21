@interface UniDeviceCache : NSObject

+ (void)clearAllCaches;
+ (id)bufferFromData:(id)a0 device:(id)a1;
+ (id)findComputeKernel:(id)a0 library:(id)a1 constants:(id)a2;
+ (id)findComputeKernel:(id)a0 metalContext:(id)a1 constants:(id)a2;
+ (id)findKernel:(id)a0 device:(id)a1;

@end
