@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithUniqueIdentifier:(id)a0 outputDevices:(id)a1 volume:(float)a2 capabilities:(unsigned int)a3 muted:(BOOL)a4;
- (void)initializeVolumeCapabilitiesForLegacyCleints;
- (void)encodeWithCoder:(id)a0;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)removeAllOutputDevices;
- (float)volume;
- (void)removeOutputDevices:(id)a0;
- (id)externalOutputContextRepresentation;
- (BOOL)isVolumeMuted;
- (void)updateOutputDevices:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0;
- (unsigned int)volumeControlCapabilities;
- (id)initWithCoder:(id)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (id)outputDevices;
- (id)uniqueIdentifier;
- (void)updateVolumeMuted:(BOOL)a0 outputDeviceUID:(id)a1;
- (void).cxx_destruct;

@end
