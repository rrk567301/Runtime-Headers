@class NSString;
@protocol MTLDevice;

@interface CCSnoopMTLResourceStateCommandEncoder : CCSnoop <MTLResourceStateCommandEncoder>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
