@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding, WebKitSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (void)initialize;
+ (id)outputContext;
+ (id)sharedSystemScreenContext;
+ (id)addSharedAudioOutputContext;
+ (id)sharedSystemRemotePoolContext;
+ (id)iTunesAudioContext;
+ (Class)defaultOutputContextImplClass;
+ (id)defaultSharedOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)auxiliaryOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)sharedSystemAudioContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)sharedAudioPresentationOutputContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)sharedSystemRemoteDisplayContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)allSharedAudioOutputContexts;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;

- (void)setCommunicationChannelDelegate:(id)a0;
- (BOOL)isMuted;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)increaseVolumeByCount:(long long)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (id)outputContextType;
- (id)contextID;
- (id)ID;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (BOOL)canMute;
- (BOOL)canSetVolume;
- (id)initWithCoder:(id)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (void)setMuted:(BOOL)a0;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (unsigned long long)hash;
- (long long)volumeControlType;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (unsigned long long)outputDeviceFeatures;
- (id)impl;
- (void)setOutputDevices:(id)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)associatedAudioDeviceID;
- (void)encodeWithCoder:(id)a0;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (float)volume;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (BOOL)getApplicationProcessID:(int *)a0;
- (void)outputContextImplDidChangeMute:(id)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (id)description;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (id)_webKitPropertyListData;
- (id)communicationChannelDelegate;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setApplicationProcessID:(int)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (int)applicationProcessID;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)outputDevices;
- (void)removeOutputDevice:(id)a0;
- (id)init;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (void)setVolume:(float)a0;
- (id)outputDevice;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (BOOL)supportsMultipleOutputDevices;
- (void)dealloc;
- (void)addOutputDevice:(id)a0;

@end
