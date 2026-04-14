@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
}

@property (weak, nonatomic) id<HDPairedDeviceCapabilityProvidingDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;
- (void)startListeningForUpdates;

@end
