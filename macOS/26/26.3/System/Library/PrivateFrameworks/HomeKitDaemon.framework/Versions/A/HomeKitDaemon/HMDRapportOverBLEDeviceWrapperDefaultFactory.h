@class NSString;

@interface HMDRapportOverBLEDeviceWrapperDefaultFactory : NSObject <HMDRapportOverBLEDeviceWrapperFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeWrapperWithClient:(id)a0;

@end
