@class VCAudioRelayIOControllerSettings, NSString, NSDictionary, VCAudioRelay, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    struct _VCAudioIOControllerIOState { char timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[40]; char isMuted; char isVoiceActivityEnabled; char isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; char isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sinkData;
    struct _VCAudioIOControllerIOState { char timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[40]; char isMuted; char isVoiceActivityEnabled; char isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; char isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}

@property (readonly, nonatomic) VCAudioRelay *relay;
@property (readonly, nonatomic) char supportsVoiceActivityDetection;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)addClient:(id)a0;
- (char)removeClient:(id)a0;
- (unsigned int)channelsPerFrame;
- (void)_cleanupDeadClients;
- (void)addStartingClient:(id)a0 controllerSettings:(id)a1;
- (unsigned int)computeSamplePerFrameWithControllerSampleRate:(unsigned int)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { } *)a0;
- (char)handleTransitionPrepareToStarting;
- (id)initWithRelayType:(unsigned int)a0 relayIOType:(unsigned int)a1;
- (void)loadRelay;
- (id)newControllerSettingsWithNewClient:(id)a0;
- (id)newRelayIOWithCompletionHandler:(id /* block */)a0;
- (void)processEventQueue:(struct AudioEventQueue_t { } *)a0 clientList:(id)a1;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; char x7; char x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { char x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; char x15; char x16; char x17; double x18; char x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { char x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; char x15; char x16; char x17; double x18; char x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a0;
- (void)resetAudioTimestamps;
- (struct _VCAudioIOControllerIOState { char x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; char x15; char x16; char x17; double x18; char x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)sinkIO;
- (struct _VCAudioIOControllerIOState { char x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; char x15; char x16; char x17; double x18; char x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)sourceIO;
- (void)startClient:(id)a0;
- (char)startRelayIO:(id)a0;
- (char)stateIdleWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (char)statePrepareWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (char)stateRunningWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (char)stateStartingWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (void)stopClient:(id)a0;
- (void)unloadRelay;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; char x7; char x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { char x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; char x15; char x16; char x17; double x18; char x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a1;
- (void)updateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; char x1; char x2; char x3; } *)a1;
- (char)updateStateWithClient:(id)a0;
- (void)waitIdleForClient:(id)a0;

@end
