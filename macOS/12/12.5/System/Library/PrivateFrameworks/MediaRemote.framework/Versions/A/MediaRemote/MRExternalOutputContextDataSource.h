@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

- (void).cxx_destruct;
- (float)volume;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (unsigned int)volumeControlCapabilities;
- (void)removeOutputDevices:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (void)removeAllOutputDevices;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;

@end
