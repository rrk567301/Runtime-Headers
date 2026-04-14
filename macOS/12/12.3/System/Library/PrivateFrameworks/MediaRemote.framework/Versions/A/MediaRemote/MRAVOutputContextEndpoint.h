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

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (BOOL)isConnected;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)isProxyGroupPlayer;
- (id)designatedGroupLeader;
- (BOOL)canModifyGroupMembership;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (id)personalOutputDevices;
- (void)volumeControlCapabilitiesForOutputDevice:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)a0;
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)a0;
- (void)outputContextDataSourceDidAddOutputDevice:(id)a0;
- (void)outputContextDataSourceDidChangeOutputDevice:(id)a0;
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)a0;
- (void)outputContextDataSourceReloaded:(id)a0;

@end
