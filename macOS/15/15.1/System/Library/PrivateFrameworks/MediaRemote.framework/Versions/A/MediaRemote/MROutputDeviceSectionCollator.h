@class NSString;

@interface MROutputDeviceSectionCollator : NSObject <MROutputDeviceCollator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collateOutputDevices:(id)a0;

@end
