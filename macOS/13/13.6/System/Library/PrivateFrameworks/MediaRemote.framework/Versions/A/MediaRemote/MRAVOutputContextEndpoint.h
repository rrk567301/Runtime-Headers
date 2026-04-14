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
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)connectionType;
- (id)uniqueIdentifier;
- (BOOL)isConnected;
- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (void)_adjustOutputDeviceVolume:(long long)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)_externalOutputContext;
- (void)_setOutputDeviceIsMuted:(BOOL)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)canModifyGroupMembership;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)designatedGroupLeader;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)isProxyGroupPlayer;
- (void)outputContextDataSourceReloaded:(id)a0;
- (id)personalOutputDevices;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;

@end
