@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding, WebKitSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (id)outputContext;
+ (void)initialize;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (Class)defaultOutputContextImplClass;
+ (id)auxiliaryOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)sharedSystemRemotePoolContext;
+ (id)sharedSystemRemoteDisplayContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)sharedSystemAudioContext;
+ (id)outputContextForID:(id)a0;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedAudioPresentationOutputContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)defaultSharedOutputContext;
+ (id)addSharedAudioOutputContext;
+ (id)allSharedAudioOutputContexts;

- (id)ID;
- (long long)volumeControlType;
- (BOOL)canMute;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (BOOL)canSetVolume;
- (void)setMuted:(BOOL)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (id)communicationChannelDelegate;
- (BOOL)isMuted;
- (float)volume;
- (void)setVolume:(float)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (unsigned long long)outputDeviceFeatures;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)setOutputDevices:(id)a0;
- (id)impl;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (id)outputContextType;
- (id)contextID;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)outputContextImplDidChangeMute:(id)a0;
- (id)outputDevices;
- (id)_webKitPropertyListData;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)increaseVolumeByCount:(long long)a0;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (id)initWithOutputContextImpl:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (unsigned long long)hash;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (id)init;
- (BOOL)supportsMultipleOutputDevices;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)addOutputDevice:(id)a0;
- (id)outgoingCommunicationChannel;
- (void)removeOutputDevice:(id)a0;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)setApplicationProcessID:(int)a0;
- (id)description;
- (id)associatedAudioDeviceID;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (int)applicationProcessID;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (BOOL)getApplicationProcessID:(int *)a0;
- (id)outputDevice;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)dealloc;
- (void)decreaseVolumeByCount:(long long)a0;

@end
