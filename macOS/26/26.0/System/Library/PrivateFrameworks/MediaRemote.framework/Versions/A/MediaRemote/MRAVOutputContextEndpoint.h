@class NSArray, MRAVConcreteOutputContext, MROutputContextController, NSString, MROrigin;

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext;
@property (retain, nonatomic) MROutputContextController *outputContextController;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;

- (void)_setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_adjustOutputDeviceVolume:(long long)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)outputContextDataSourceReloaded:(id)a0;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (void)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_modifyTopologyWithRequest:(id)a0 withReplyQueue:(id)a1 completion:(id /* block */)a2;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (BOOL)groupContainsDiscoverableGroupLeader;
- (void)setConversationDetectionEnabled:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_handleDeviceInfoDidChange:(id)a0;
- (void)resetPredictedOutputDevice;
- (void)_muteOutputDeviceVolume:(BOOL)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)requestGroupSessionWithDetails:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)_externalOutputContext;
- (id)designatedGroupLeader;
- (BOOL)canModifyGroupMembership;
- (id)personalOutputDevices;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)predictedOutputDeviceUIDs;
- (BOOL)isConnected;
- (void)dealloc;
- (id)predictedOutputDevice;
- (void)encodeWithCoder:(id)a0;
- (id)deviceInfo;
- (id)initWithCoder:(id)a0;
- (long long)connectionType;
- (id)uniqueIdentifier;
- (void).cxx_destruct;

@end
