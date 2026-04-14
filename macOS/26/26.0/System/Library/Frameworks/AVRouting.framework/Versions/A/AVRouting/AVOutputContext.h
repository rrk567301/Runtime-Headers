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
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)sharedSystemScreenContext;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (id)defaultSharedOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)addSharedAudioOutputContext;
+ (id)sharedSystemRemotePoolContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)sharedSystemRemoteDisplayContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedSystemAudioContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (Class)defaultOutputContextImplClass;
+ (id)allSharedAudioOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;

- (id)outputDevice;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCommunicationChannelDelegate:(id)a0;
- (id)outputContextType;
- (id)outgoingCommunicationChannel;
- (BOOL)supportsMultipleOutputDevices;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (id)communicationChannelDelegate;
- (BOOL)providesControlForAllVolumeFeatures;
- (id)impl;
- (int)applicationProcessID;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (void)setVolume:(float)a0;
- (id)_webKitPropertyListData;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (void)dealloc;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)decreaseVolumeByCount:(long long)a0;
- (id)contextID;
- (id)initWithOutputContextImpl:(id)a0;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (unsigned long long)outputDeviceFeatures;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (id)init;
- (float)volume;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)setMuted:(BOOL)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (void)addOutputDevice:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)description;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (BOOL)canSetVolume;
- (void)setOutputDevices:(id)a0;
- (long long)volumeControlType;
- (void)increaseVolumeByCount:(long long)a0;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)setApplicationProcessID:(int)a0;
- (BOOL)isMuted;
- (id)initWithCoder:(id)a0;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (id)ID;
- (id)outputDevices;
- (void)outputContextImplDidChangeMute:(id)a0;
- (BOOL)canMute;
- (unsigned long long)hash;
- (id)associatedAudioDeviceID;
- (BOOL)isEqual:(id)a0;
- (void)removeOutputDevice:(id)a0;
- (BOOL)getApplicationProcessID:(int *)a0;

@end
