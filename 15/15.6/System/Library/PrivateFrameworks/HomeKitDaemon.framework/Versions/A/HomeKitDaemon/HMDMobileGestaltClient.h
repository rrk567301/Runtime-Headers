@class NSString;

@interface HMDMobileGestaltClient : HMFObject <HMDMobileGestaltClient>

@property (readonly) char supportsSiriHub;
@property (readonly) char supportsReceivingARCStreamOverAirPlay;
@property (readonly) NSString *serialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
