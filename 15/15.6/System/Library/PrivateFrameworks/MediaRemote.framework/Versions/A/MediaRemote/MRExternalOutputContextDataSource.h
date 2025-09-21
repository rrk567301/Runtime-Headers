@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    char _groupVolumeMuted;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (float)volume;
- (id)outputDevices;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)initializeVolumeCapabilitiesForLegacyCleints;
- (char)isVolumeMuted;
- (void)removeAllOutputDevices;
- (void)removeOutputDevices:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeMuted:(char)a0 outputDeviceUID:(id)a1;
- (unsigned int)volumeControlCapabilities;

@end
