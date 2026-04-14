@class MRAVConcreteOutputDevice, NSArray, NSString, MRAVOutputDeviceSourceInfo, NSMutableDictionary, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVConcreteOutputDevice *_predictedOutputDevice;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    AVOutputContext *_avOutputContext;
    NSMutableDictionary *_notifications;
}

@property (class, readonly, nonatomic) AVOutputContext *outputContextForLocalDevice;
@property (class, copy, nonatomic) id /* block */ outputContextForLocalDeviceDataSource;

@property (retain, nonatomic) AVOutputContext *avOutputContext;
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (nonatomic) BOOL isVolumeControlAvailable;

+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)iTunesContext;
+ (id)sharedAudioPresentationContext;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;
- (id)contextID;
- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)_handleCanMuteDidChangeNotification:(id)a0;
- (void)_handleClusterMemberCanMuteDidChangeNotification:(id)a0;
- (void)_handleClusterMemberMutedDidChangeNotification:(id)a0;
- (void)_handleClusterMemberRoomVolumeDidChangeNotification:(id)a0;
- (void)_handleClusterMemberVolumeControlTypeDidChangeNotification:(id)a0;
- (void)_handleClusterMemberVolumeDidChangeNotification:(id)a0;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)a0;
- (void)_handleMutedDidChangeNotification:(id)a0;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (void)_reloadOutputDevices;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (void)attemptLogicalDeviceRecovery;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (BOOL)isVolumeMuted;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (void)setVolume:(float)a0 details:(id)a1;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (BOOL)supportsVolumeControl;
- (unsigned int)volumeControlCapabilities;

@end
