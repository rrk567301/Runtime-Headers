@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)volumeControlCapabilities;
- (id)externalOutputContextRepresentation;
- (BOOL)isVolumeMuted;
- (id)uniqueIdentifier;
- (float)volume;
- (void)removeOutputDevices:(id)a0;
- (id)outputDevices;
- (void)initializeVolumeCapabilitiesForLegacyCleints;
- (void)updateVolumeMuted:(BOOL)a0 outputDeviceUID:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)removeAllOutputDevices;
- (id)initWithUniqueIdentifier:(id)a0 outputDevices:(id)a1 volume:(float)a2 capabilities:(unsigned int)a3 muted:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateOutputDevices:(id)a0;

@end
