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
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)sharedSystemRemoteDisplayContext;
+ (id)allSharedAudioOutputContexts;
+ (id)sharedSystemRemotePoolContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)auxiliaryOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)defaultSharedOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)addSharedAudioOutputContext;
+ (Class)defaultOutputContextImplClass;

- (BOOL)isMuted;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)increaseVolumeByCount:(long long)a0;
- (BOOL)canSetVolume;
- (long long)volumeControlType;
- (BOOL)canMute;
- (void)setMuted:(BOOL)a0;
- (void)setOutputDevices:(id)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (id)ID;
- (id)communicationChannelDelegate;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (void)setVolume:(float)a0;
- (float)volume;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)outputDevices;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)impl;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)contextID;
- (BOOL)getApplicationProcessID:(int *)a0;
- (id)description;
- (void)removeOutputDevice:(id)a0;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (id)associatedAudioDeviceID;
- (id)init;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)addOutputDevice:(id)a0;
- (id)outputDevice;
- (id)outputContextType;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (id)_webKitPropertyListData;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (int)applicationProcessID;
- (void)outputContextImplDidChangeMute:(id)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)setApplicationProcessID:(int)a0;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)supportsMultipleOutputDevices;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (unsigned long long)outputDeviceFeatures;
- (BOOL)isEqual:(id)a0;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (BOOL)providesControlForAllVolumeFeatures;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;

@end
