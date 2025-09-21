@class NSMutableDictionary, MRAVOutputDevice, MRAVOutputContext, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _groupVolumeMuted;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    BOOL _localVolumeMutedInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSMutableDictionary *_outputDeviceVolumeMuted;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic) BOOL localVolumeMuted;
@property (readonly, nonatomic, getter=isLocalDeviceDesignatedGroupLeader) BOOL localDeviceDesignatedGroupLeader;
@property (readonly, nonatomic, getter=isOutputContextEmpty) BOOL outputContextEmpty;
@property (retain, nonatomic) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty;

+ (id)sharedOutputContextController;

- (void)_handleOutputDeviceRemovedNotification:(id)a0;
- (void)_handleOutputDeviceVolumeMutedDidChangeNotification:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDevicesReloadedNotification:(id)a0;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (id)muteVolume:(BOOL)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceAddedNotification:(id)a0;
- (float)volume;
- (BOOL)isVolumeMuted;
- (id)description;
- (void)modifyTopologyWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned int)volumeControlCapabilities;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (id)setVolume:(float)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (id)outputDevices;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithOutputContext:(id)a0;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)a0;
- (id)adjustVolume:(long long)a0 outputDeviceUID:(id)a1 details:(id)a2;
- (void).cxx_destruct;

@end
