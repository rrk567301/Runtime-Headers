@class NSMutableDictionary, AVBInterface, NSDictionary, AVB17221AEMEntity;

@interface AVBBuiltInAVDECCEntity : AVBATDECCEntity {
    NSDictionary *_controllerMappings;
    NSMutableDictionary *_localInputStreams;
    NSMutableDictionary *_localOutputStreams;
    NSMutableDictionary *_remoteInputStreams;
    NSMutableDictionary *_remoteOutputStreams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamsLock;
}

@property (retain) AVB17221AEMEntity *remoteModel;
@property (retain) AVB17221AEMEntity *localModel;
@property (nonatomic, getter=isActivated) char activated;
@property (retain, nonatomic) AVBInterface *selectedInterface;

+ (id)keyPathsForValuesAffectingRemoteModel;

- (void)dealloc;
- (void).cxx_destruct;
- (char)clearAllConnectionsOnInterface:(id)a0;
- (void)setRemoteModel:(id)a0;
- (char)_connectLocalInputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)_connectLocalOutputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)_connectRemoteInputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)_connectRemoteOutputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)_connectStreamWithLocalInputIndex:(unsigned short)a0 andRemoteOutputIndex:(unsigned short)a1 streamingWait:(char)a2 classB:(char)a3 onInterface:(id)a4;
- (char)_connectStreamWithRemoteInputIndex:(unsigned short)a0 andLocalOutputIndex:(unsigned short)a1 streamingWait:(char)a2 classB:(char)a3 onInterface:(id)a4;
- (char)_disconnectLocalInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)_disconnectLocalOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)_disconnectRemoteInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)_disconnectRemoteOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)_disconnectStreamWithLocalInputIndex:(unsigned short)a0 andRemoteOutputIndex:(unsigned short)a1 onInterface:(id)a2;
- (char)_disconnectStreamWithRemoteInputIndex:(unsigned short)a0 andLocalOutputIndex:(unsigned short)a1 onInterface:(id)a2;
- (char)activateEntityOnInterface:(id)a0;
- (char)connectAllStreamsOnInterface:(id)a0;
- (char)connectAllStreamsStreamingWait:(char)a0 onInterface:(id)a1;
- (char)connectAllStreamsTuneMaxTransitTime:(char)a0 onInterface:(id)a1;
- (char)connectLocalInputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)connectLocalOutputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)connectRemoteInputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (char)connectRemoteOutputStreamWithIndex:(unsigned short)a0 streamingWait:(char)a1 classB:(char)a2 onInterface:(id)a3;
- (void)createLocalModelOnInterface:(id)a0;
- (char)deactivateEntityOnInterface:(id)a0;
- (char)disconnectAllStreamsOnInterface:(id)a0;
- (char)disconnectLocalInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)disconnectLocalOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)disconnectRemoteInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (char)disconnectRemoteOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (id)initWithEntity:(id)a0 andInterface:(id)a1;
- (id)localAECPAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)localAppleAAECommandMessageForCommandType:(unsigned short)a0;
- (id)localObjectsForRemoteObject:(id)a0;
- (id)remoteAECPAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)remoteAppleAAECommandMessageForCommandType:(unsigned short)a0;
- (id)remoteModel;
- (id)remoteObjectsForLocalObject:(id)a0;
- (char)startAllStreamsOnInterface:(id)a0;
- (char)tuneAllStreamsOnInterface:(id)a0;

@end
