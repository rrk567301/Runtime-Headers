@interface PKPeerPaymentOnDeviceProvisioningCheck : NSObject

+ (char)_hasPeerPaymentPassProvisionedForAccount:(id)a0 passLibraryDataProvider:(id)a1;
+ (id)_peerPaymentPassForAccount:(id)a0 passLibraryDataProvider:(id)a1;
+ (char)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)a0;
+ (char)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)a0 passLibraryDataProvider:(id)a1;

@end
