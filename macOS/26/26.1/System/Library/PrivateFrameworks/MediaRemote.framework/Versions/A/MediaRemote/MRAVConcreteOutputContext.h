@class MRAVConcreteOutputDevice, NSArray, NSString, MRAVOutputDeviceSourceInfo, NSMutableDictionary, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputContext : MRAVOutputContext <MRAVClusterObserver> {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVConcreteOutputDevice *_predictedOutputDevice;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    AVOutputContext *_avOutputContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _avOutputContextLock;
    NSString *_contextID;
    BOOL _supportsVolumeControl;
    BOOL _canSetVolume;
    unsigned int _volumeControlType;
    unsigned int _effectiveVolumeCapabilities;
    NSMutableDictionary *_notifications;
}

@property (class, readonly, nonatomic) AVOutputContext *outputContextForLocalDevice;
@property (class, copy, nonatomic) id /* block */ outputContextForLocalDeviceDataSource;

@property (retain, nonatomic) AVOutputContext *avOutputContext;
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iTunesContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)sharedSystemAudioContext;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemScreenContext;

- (void)setVolume:(float)a0 details:(id)a1;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)resetPredictedOutputDevice;
- (void)modifyTopologyWithRequest:(id)a0 withReplyQueue:(id)a1 completion:(id /* block */)a2;
- (unsigned int)type;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (BOOL)supportsVolumeControl;
- (unsigned int)volumeControlCapabilities;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (void)_handleOutputContextVolumeControlTypeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (void)_handlePredictedOutputDevicesDidChangeNotification:(id)a0;
- (void)_handleMutedDidChangeNotification:(id)a0;
- (id)predictedOutputDevice;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (id)contextID;
- (id)predictedOutputDeviceUIDs;
- (void)_reloadOutputDevices;
- (void)clusterController:(id)a0 clusterTypeDidChange:(unsigned int)a1;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)a0;
- (BOOL)isVolumeMuted;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (void)_handleClusterMemberCanMuteDidChangeNotification:(id)a0;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (void)_handleClusterMemberRoomVolumeDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_handleClusterMemberVolumeControlTypeDidChangeNotification:(id)a0;
- (void)_handleClusterMemberMutedDidChangeNotification:(id)a0;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (void)_handleCanMuteDidChangeNotification:(id)a0;
- (float)volume;
- (void)_handleOutputContextCanSetVolumeDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)a0;
- (void)_handleClusterMemberVolumeDidChangeNotification:(id)a0;

@end
