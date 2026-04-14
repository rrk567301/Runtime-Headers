@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
    NSArray *_clusterComposition;
    NSArray *_clusterMembers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *generateDescriptor;

- (id)name;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (float)volume;
- (id)uid;
- (id)descriptor;
- (unsigned int)deviceType;
- (id)groupID;
- (long long)transportType;
- (id)firmwareVersion;
- (id)initWithDescriptor:(id)a0;
- (float)distance;
- (unsigned int)deviceSubtype;
- (id)bluetoothID;
- (float)batteryLevel;
- (unsigned int)clusterType;
- (id)sourceInfo;
- (BOOL)requiresAuthorization;
- (id)primaryID;
- (unsigned long long)configuredClusterSize;
- (id)modelID;
- (BOOL)isClusterLeader;
- (id)clusterID;
- (BOOL)producesLowFidelityAudio;
- (BOOL)isAppleAccessory;
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
- (long long)hostDeviceClass;
- (BOOL)discoveredOnSameInfra;
- (BOOL)isRemoteControllable;
- (BOOL)isGroupable;
- (BOOL)isLocalDevice;
- (BOOL)supportsExternalScreen;
- (BOOL)isDeviceGroupable;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isAirPlayReceiverSessionActive;
- (id)parentGroupIdentifier;
- (BOOL)parentGroupContainsDiscoverableLeader;
- (BOOL)isAddedToHomeKit;
- (unsigned int)volumeCapabilities;
- (BOOL)supportsHAP;
- (BOOL)supportsRapportRemoteControlTransport;
- (BOOL)supportsMultiplayer;
- (id)airPlayGroupID;
- (BOOL)supportsSharePlayHandoff;
- (id)clusterMembers;
- (id)initWithSkeleton:(id)a0;
- (id)modelSpecificInfo;
- (BOOL)isUsingJSONProtocol;
- (id)clusterComposition;
- (BOOL)isPickable;

@end
