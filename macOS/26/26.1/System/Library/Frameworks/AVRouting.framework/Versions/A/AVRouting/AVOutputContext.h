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
+ (id)sharedSystemAudioContext;
+ (Class)defaultOutputContextImplClass;
+ (void)initialize;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemRemoteDisplayContext;
+ (id)addSharedAudioOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)auxiliaryOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputContextForID:(id)a0;
+ (id)sharedSystemRemotePoolContext;
+ (id)allSharedAudioOutputContexts;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)defaultSharedOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;

- (BOOL)canSetVolume;
- (BOOL)isMuted;
- (id)outputContextType;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)outputContextImplDidChangeMute:(id)a0;
- (BOOL)supportsMultipleOutputDevices;
- (id)outputDevice;
- (long long)volumeControlType;
- (void)setMuted:(BOOL)a0;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)outputDeviceFeatures;
- (id)communicationChannelDelegate;
- (void)decreaseVolumeByCount:(long long)a0;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (BOOL)canMute;
- (void)setCommunicationChannelDelegate:(id)a0;
- (id)ID;
- (void)increaseVolumeByCount:(long long)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (id)impl;
- (id)outputDevices;
- (unsigned long long)hash;
- (id)contextID;
- (BOOL)getApplicationProcessID:(int *)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (void)setVolume:(float)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)setOutputDevices:(id)a0;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (int)applicationProcessID;
- (id)outgoingCommunicationChannel;
- (id)_webKitPropertyListData;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (id)description;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)dealloc;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (float)volume;
- (id)initWithCoder:(id)a0;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)associatedAudioDeviceID;
- (void)addOutputDevice:(id)a0;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (void)setApplicationProcessID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)removeOutputDevice:(id)a0;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContextImplDidChangeCanMute:(id)a0;

@end
