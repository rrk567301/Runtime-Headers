@class NSObject, ICEResultWaitQueue, NSMutableArray, VideoConference;
@protocol OS_dispatch_queue;

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {
    unsigned char _clientUUID[16];
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } stateLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } sipLock;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    VideoConference *conferenceWithMic;
    struct tagHANDLE { int x0; } *hSIP;
    int sipRefCount;
    id _vtpWrapper;
    char isVTPInitialized;
    id _networkAgent;
}

@property VideoConference *activeConference;
@property VideoConference *conferenceWithMic;
@property (readonly) ICEResultWaitQueue *resultQueue;
@property (readonly) NSMutableArray *vcList;

+ (void)addNSError:(id)a0 toConferenceXPCArgumentDictionary:(id)a1;
+ (id)defaultVideoConferenceManager;

- (id)init;
- (struct tagHANDLE { int x0; } *)SIPHandle;
- (void)addVideoConference:(id)a0;
- (void)broadcastCellTechChange:(int)a0 cellularMaxPktLen:(unsigned short)a1;
- (void)cleanupVTP;
- (id)conferenceForCallID:(unsigned int)a0;
- (id)conferenceForParticipantID:(id)a0;
- (id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; BOOL x2; } x2; struct { id x0; } x3; } x1; unsigned int x2; struct tagVCSourceDestinationInfo *x3; void *x4; } *)a0;
- (void)createSIPWithPacketMultiplexMode:(int)a0;
- (void)getClientUUID:(unsigned char[16])a0;
- (char)hasVideoConference:(id)a0;
- (char)isSIPHandleValid:(struct tagHANDLE { int x0; } *)a0;
- (void)pauseVideoConferences:(char)a0;
- (void)registerBlocksForConference;
- (void)removeVideoConference:(id)a0;
- (void)setupVTPCallback;
- (void)startSIPWithPacketMultiplexMode:(int)a0 transportType:(unsigned int)a1;
- (void)stopSIPWithTransportType:(unsigned int)a0;
- (void)videoConference:(id)a0 cancelRelayRequest:(unsigned int)a1 requestDict:(id)a2;
- (void)videoConference:(id)a0 closeConnectionForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 didChangeLocalVariablesForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 didReceiveARPLData:(id)a1 fromCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didReceiveData:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didReceiveFirstRemoteFrameForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 didRemoteScreenAttributesChange:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didRemoteVideoAttributesChange:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didStartSession:(char)a1 withCallID:(unsigned int)a2 error:(id)a3;
- (void)videoConference:(id)a0 didStartSession:(char)a1 withCallID:(unsigned int)a2 withUserInfo:(id)a3 error:(id)a4;
- (void)videoConference:(id)a0 didStopWithCallID:(unsigned int)a1 error:(id)a2 callMetadata:(id)a3;
- (void)videoConference:(id)a0 inititiateRelayRequest:(unsigned int)a1 requestDict:(id)a2;
- (void)videoConference:(id)a0 isRemoteAudioBelowThreshold:(char)a1;
- (void)videoConference:(id)a0 localAudioEnabled:(char)a1 forCallID:(unsigned int)a2 error:(id)a3;
- (void)videoConference:(id)a0 localIPChange:(id)a1 withCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 receivedNoRemotePacketsForTime:(double)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteAudioEnabled:(char)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteAudioPaused:(char)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteCallingModeChanged:(unsigned int)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteMediaStalled:(char)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteVideoPaused:(char)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 sendRelayUpdate:(unsigned int)a1 updateDict:(id)a2;
- (void)videoConference:(id)a0 updateInputFrequencyLevel:(id)a1;
- (void)videoConference:(id)a0 updateInputMeterLevel:(float)a1;
- (void)videoConference:(id)a0 updateOutputFrequencyLevel:(id)a1;
- (void)videoConference:(id)a0 updateOutputMeterLevel:(float)a1;
- (void)videoConference:(id)a0 videoQualityNotificationForCallID:(unsigned int)a1 isDegraded:(char)a2 isRemote:(char)a3;
- (void)videoConference:(id)a0 withCallID:(unsigned int)a1 didPauseAudio:(char)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(unsigned int)a1 didPauseVideo:(char)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(unsigned int)a1 isSendingAudio:(char)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(unsigned int)a1 networkHint:(char)a2;

@end
