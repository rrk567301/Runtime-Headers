@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (void)initialize;
+ (id)outputContext;
+ (id)outputContextForID:(id)a0;
+ (Class)defaultOutputContextImplClass;
+ (id)sharedAudioPresentationOutputContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemRemotePoolContext;
+ (id)iTunesAudioContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)addSharedAudioOutputContext;
+ (id)allSharedAudioOutputContexts;
+ (id)defaultSharedOutputContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)volume;
- (id)impl;
- (id)contextID;
- (void)setVolume:(float)a0;
- (id)ID;
- (id)outputDevices;
- (BOOL)canSetVolume;
- (id)outputDevice;
- (unsigned long long)outputDeviceFeatures;
- (id)communicationChannelDelegate;
- (id)initWithOutputContextImpl:(id)a0;
- (id)outputContextType;
- (BOOL)getApplicationProcessID:(int *)a0;
- (id)associatedAudioDeviceID;
- (BOOL)supportsMultipleOutputDevices;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)providesControlForAllVolumeFeatures;
- (id)outgoingCommunicationChannel;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (int)applicationProcessID;
- (void)setApplicationProcessID:(int)a0;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)setOutputDevices:(id)a0;
- (void)addOutputDevice:(id)a0;
- (void)removeOutputDevice:(id)a0;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;

@end
