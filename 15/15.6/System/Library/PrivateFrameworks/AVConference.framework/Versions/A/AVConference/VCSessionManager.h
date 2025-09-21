@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionManager : NSObject <VCSessionDelegate> {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (nonatomic) char sharingEnabled;
@property (nonatomic) char screenAndCameraMixingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;

- (void)dealloc;
- (id)init;
- (void)releaseSession:(id)a0;
- (id)sessionForUUID:(id)a0;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteMediaStateDidChange:(unsigned int)a2 forMediaType:(unsigned int)a3;
- (void)deregisterBlocksForService;
- (id)participantConfigFromXPCDictionary:(id)a0;
- (void)registerBlocksForService;
- (id)sessionForStreamToken:(unsigned int)a0;
- (void)vcSession:(id)a0 addParticipantWithID:(id)a1 didSucceed:(char)a2 error:(id)a3;
- (void)vcSession:(id)a0 didStart:(char)a1 error:(id)a2;
- (void)vcSession:(id)a0 didStopWithError:(id)a1;
- (void)vcSession:(id)a0 downlinkRateAdaptationDidChangeWithInfo:(id)a1;
- (void)vcSession:(id)a0 oneToOneModeEnabled:(char)a1 didSucceed:(char)a2 error:(id)a3;
- (void)vcSession:(id)a0 participantDidStopReacting:(id)a1;
- (void)vcSession:(id)a0 participantID:(id)a1 audioEnabled:(char)a2 didSucceed:(char)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 audioPaused:(char)a2 didSucceed:(char)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 didChangeMediaPriority:(unsigned char)a2 description:(id)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 didDetectError:(id)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 mediaStateDidChange:(unsigned int)a2 forMediaType:(unsigned int)a3 didSucceed:(char)a4 error:(id)a5;
- (void)vcSession:(id)a0 participantID:(id)a1 mixingDidChangeForMediaType:(unsigned int)a2 mixingMediaType:(unsigned int)a3;
- (void)vcSession:(id)a0 participantID:(id)a1 reactionDidStart:(id)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioEnabledDidChange:(char)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteAudioPausedDidChange:(char)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteScreenEnabledDidChange:(char)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoEnabledDidChange:(char)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 remoteVideoPausedDidChange:(char)a2;
- (void)vcSession:(id)a0 participantID:(id)a1 screenEnabled:(char)a2 didSucceed:(char)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 videoEnabled:(char)a2 didSucceed:(char)a3 error:(id)a4;
- (void)vcSession:(id)a0 participantID:(id)a1 videoPaused:(char)a2 didSucceed:(char)a3 error:(id)a4;
- (void)vcSession:(id)a0 removeParticipantWithID:(id)a1 didSucceed:(char)a2 error:(id)a3;
- (void)vcSession:(id)a0 updateConfiguration:(id)a1 didSucceed:(char)a2 error:(id)a3;
- (void)vcSession:(id)a0 uplinkRateAdaptationDidChangeWithInfo:(id)a1;
- (void)vcSessionShouldReconnect:(id)a0;

@end
