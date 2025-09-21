@class NSMutableDictionary, MRAVOutputDevice, MRAVOutputContext, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    char _groupVolumeMuted;
    char _localVolumeInitialized;
    char _localVolumeControlCapabilitiesInitialized;
    char _localVolumeMutedInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSMutableDictionary *_outputDeviceVolumeMuted;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic) char localVolumeMuted;
@property (readonly, nonatomic, getter=isLocalDeviceDesignatedGroupLeader) char localDeviceDesignatedGroupLeader;
@property (readonly, nonatomic, getter=isOutputContextEmpty) char outputContextEmpty;
@property (retain, nonatomic) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty;

+ (id)sharedOutputContextController;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (float)volume;
- (id)outputDevices;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceAddedNotification:(id)a0;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceRemovedNotification:(id)a0;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDevicesReloadedNotification:(id)a0;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (id)adjustVolume:(long long)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (id)initWithOutputContext:(id)a0;
- (id)muteVolume:(char)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (id)setVolume:(float)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (unsigned int)volumeControlCapabilities;

@end
