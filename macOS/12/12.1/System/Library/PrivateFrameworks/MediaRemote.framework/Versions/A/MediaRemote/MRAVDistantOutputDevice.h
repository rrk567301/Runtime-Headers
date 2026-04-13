@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
    NSArray *_clusterComposition;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;

- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (float)volume;
- (id)uid;
- (id)descriptor;
- (unsigned int)deviceType;
- (id)groupID;
- (id)firmwareVersion;
- (id)initWithDescriptor:(id)a0;
- (unsigned int)deviceSubtype;
- (id)bluetoothID;
- (float)batteryLevel;
- (unsigned int)clusterType;
- (id)sourceInfo;
- (BOOL)requiresAuthorization;
- (unsigned long long)configuredClusterSize;
- (id)modelID;
- (BOOL)producesLowFidelityAudio;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)isGroupLeader;
- (BOOL)groupContainsGroupLeader;
- (id)logicalDeviceID;
- (BOOL)canRelayCommunicationChannel;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)availableBluetoothListeningModes;
- (id)currentBluetoothListeningMode;
- (id)MACAddress;
- (BOOL)hasBatteryLevel;
- (id)clusterComposition;
- (id)primaryID;
- (BOOL)supportsMultiplayer;
- (BOOL)isRemoteControllable;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isAirPlayReceiverSessionActive;
- (id)parentGroupIdentifier;
- (BOOL)isLocalDevice;
- (BOOL)isVolumeControlAvailable;
- (unsigned int)volumeCapabilities;
- (long long)hostDeviceClass;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)isGroupable;
- (BOOL)isDeviceGroupable;
- (BOOL)supportsExternalScreen;
- (BOOL)isAddedToHomeKit;
- (BOOL)supportsHAP;
- (BOOL)supportsRapportRemoteControlTransport;
- (id)airPlayGroupID;
- (BOOL)supportsSharePlayHandoff;
- (id)initWithSkeleton:(id)a0;
- (id)modelSpecificInfo;
- (BOOL)isUsingJSONProtocol;

@end
