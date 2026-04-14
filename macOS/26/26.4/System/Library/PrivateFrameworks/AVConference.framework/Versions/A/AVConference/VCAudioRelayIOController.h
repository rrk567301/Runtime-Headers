@class VCAudioRelayIOControllerSettings, NSString, NSDictionary, VCAudioRelay, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    struct _VCAudioIOControllerIOState { BOOL timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } clientIOListLock; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[60]; BOOL isMuted; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; BOOL isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sinkData;
    struct _VCAudioIOControllerIOState { BOOL timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } clientIOListLock; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[60]; BOOL isMuted; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; BOOL isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}

@property (readonly, nonatomic) VCAudioRelay *relay;
@property (readonly, nonatomic) BOOL supportsVoiceActivityDetection;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)terminateWithReason:(id)a0;
+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceNull;
+ (id)sharedInstanceRemoteFacing;

- (BOOL)addClient:(id)a0;
- (BOOL)removeClient:(id)a0;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned int)channelsPerFrame;
- (void)_cleanupDeadClients;
- (void)addStartingClient:(id)a0 controllerSettings:(id)a1;
- (unsigned int)computeSamplePerFrameWithControllerSampleRate:(unsigned int)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { } *)a0;
- (BOOL)handleTransitionPrepareToStarting;
- (id)initWithRelayType:(unsigned int)a0 relayIOType:(unsigned int)a1;
- (void)loadRelay;
- (id)newControllerSettingsWithNewClient:(id)a0;
- (id)newRelayIOWithCompletionHandler:(id /* block */)a0;
- (void)processEventQueue:(struct AudioEventQueue_t { } *)a0 clientList:(id)a1;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct os_unfair_lock_s { unsigned int x0; } x7; struct opaqueCMSimpleQueue *x8; struct opaqueVCAudioLimiter *x9; struct opaqueVCAudioBufferList *x10; struct opaqueVCAudioBufferList *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; char x15[60]; BOOL x16; BOOL x17; BOOL x18; double x19; BOOL x20; unsigned char x21; struct opaqueVCVoiceDetector *x22; } *)a1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct os_unfair_lock_s { unsigned int x0; } x7; struct opaqueCMSimpleQueue *x8; struct opaqueVCAudioLimiter *x9; struct opaqueVCAudioBufferList *x10; struct opaqueVCAudioBufferList *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; char x15[60]; BOOL x16; BOOL x17; BOOL x18; double x19; BOOL x20; unsigned char x21; struct opaqueVCVoiceDetector *x22; } *)a0;
- (void)resetAudioTimestamps;
- (struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct os_unfair_lock_s { unsigned int x0; } x7; struct opaqueCMSimpleQueue *x8; struct opaqueVCAudioLimiter *x9; struct opaqueVCAudioBufferList *x10; struct opaqueVCAudioBufferList *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; char x15[60]; BOOL x16; BOOL x17; BOOL x18; double x19; BOOL x20; unsigned char x21; struct opaqueVCVoiceDetector *x22; } *)sinkIO;
- (struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct os_unfair_lock_s { unsigned int x0; } x7; struct opaqueCMSimpleQueue *x8; struct opaqueVCAudioLimiter *x9; struct opaqueVCAudioBufferList *x10; struct opaqueVCAudioBufferList *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; char x15[60]; BOOL x16; BOOL x17; BOOL x18; double x19; BOOL x20; unsigned char x21; struct opaqueVCVoiceDetector *x22; } *)sourceIO;
- (void)startClient:(id)a0;
- (BOOL)startRelayIO:(id)a0;
- (BOOL)stateIdleWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)statePrepareWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)stateRunningWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)stateStartingWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (void)stopClient:(id)a0;
- (void)unloadRelay;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct os_unfair_lock_s { unsigned int x0; } x7; struct opaqueCMSimpleQueue *x8; struct opaqueVCAudioLimiter *x9; struct opaqueVCAudioBufferList *x10; struct opaqueVCAudioBufferList *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; char x15[60]; BOOL x16; BOOL x17; BOOL x18; double x19; BOOL x20; unsigned char x21; struct opaqueVCVoiceDetector *x22; } *)a1;
- (void)updateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; } *)a1;
- (BOOL)updateStateWithClient:(id)a0;
- (void)waitIdleForClient:(id)a0;

@end
