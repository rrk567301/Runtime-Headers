@class NSMutableDictionary, MRAVOutputDevice, MRAVOutputContext, NSObject;
@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _masterIsMuted;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    BOOL _localIsMutedInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic) BOOL localIsMuted;
@property (readonly, nonatomic, getter=isLocalDeviceDesignatedGroupLeader) BOOL localDeviceDesignatedGroupLeader;
@property (readonly, nonatomic) BOOL useLocalValues;
@property (readonly, nonatomic) BOOL useOutputContextValues;
@property (readonly, nonatomic, getter=isOutputContextEmpty) BOOL outputContextEmpty;
@property (retain, nonatomic) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty;

+ (id)sharedOutputContextController;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (float)volume;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (id)initWithOutputContext:(id)a0;
- (float)volumeForOutputDeviceUID:(id)a0 error:(id *)a1;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)a0 error:(id *)a1;
- (BOOL)isMutedForOutputDevice:(id)a0 error:(id *)a1;
- (unsigned int)volumeControlCapabilities;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceIsMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceAddedNotification:(id)a0;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceRemovedNotification:(id)a0;
- (void)_handleOutputDevicesReloadedNotification:(id)a0;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (id)setVolume:(float)a0 outputDeviceUID:(id)a1;
- (id)setMuted:(BOOL)a0 outputDeviceUID:(id)a1;

@end
