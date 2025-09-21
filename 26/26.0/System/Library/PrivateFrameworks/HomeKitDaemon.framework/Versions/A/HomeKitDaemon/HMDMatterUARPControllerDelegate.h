@class NSString, HMDAccessoryFirmwareUpdateManager;

@interface HMDMatterUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol>

@property (readonly, weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)assetAvailablityUpdateForAccessory:(id)a0 assetID:(id)a1;
- (void).cxx_destruct;
- (id)newUploader;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (id)initWithAccessoryFirmwareUpdateManager:(id)a0;

@end
