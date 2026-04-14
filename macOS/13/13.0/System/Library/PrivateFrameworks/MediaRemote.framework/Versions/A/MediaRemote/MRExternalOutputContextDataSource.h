@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (float)volume;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (unsigned int)volumeControlCapabilities;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (void)removeOutputDevices:(id)a0;
- (void)removeAllOutputDevices;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;

@end
