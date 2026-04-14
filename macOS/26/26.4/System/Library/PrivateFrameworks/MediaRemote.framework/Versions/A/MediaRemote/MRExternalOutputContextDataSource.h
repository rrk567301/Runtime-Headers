@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)uniqueIdentifier;
- (id)initWithUniqueIdentifier:(id)a0;
- (float)volume;
- (id)externalOutputContextRepresentation;
- (void)initializeVolumeCapabilitiesForLegacyClients;
- (void)updateOutputDevices:(id)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (BOOL)isVolumeMuted;
- (id)initWithUniqueIdentifier:(id)a0 outputDevices:(id)a1 volume:(float)a2 capabilities:(unsigned int)a3 muted:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (unsigned int)volumeControlCapabilities;
- (id)outputDevices;
- (void)removeAllOutputDevices;
- (void).cxx_destruct;
- (void)removeOutputDevices:(id)a0;
- (void)updateVolumeMuted:(BOOL)a0 outputDeviceUID:(id)a1;
- (id)initWithCoder:(id)a0;

@end
