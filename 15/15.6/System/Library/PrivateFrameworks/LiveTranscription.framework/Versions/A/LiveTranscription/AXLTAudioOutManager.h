@class NSMapTable, NSString, NSObject;
@protocol OS_dispatch_queue, AXLTTranscriberDelegateProtocol;

@interface AXLTAudioOutManager : NSObject <AXLTTranscriberProtocol>

@property (class, readonly) AXLTAudioOutManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue;
@property (readonly) NSMapTable *processToTranscriberMap;
@property (weak, nonatomic) id<AXLTTranscriberDelegateProtocol> delegate;
@property (nonatomic) char isTranscribing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isExcludedAppID:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanupForPID:(int)a0;
- (void)_cleanupAllPids;
- (char)_stopTranscriptionForPID:(int)a0 error:(id *)a1;
- (id)_reportErrorWithCode:(long long)a0 debugErrorString:(id)a1 cleanupForPID:(int)a2;
- (char)_startTranscriptionForPID:(int)a0 appID:(id)a1 appName:(id)a2 error:(id *)a3;
- (char)_startTranscriptionForPID:(int)a0 appID:(id)a1 appName:(id)a2 excludingPIDs:(id)a3 error:(id *)a4;
- (char)_startTranscriptionForPID:(int)a0 appName:(id)a1 error:(id *)a2;
- (char)_startTranscriptionForPID:(int)a0 appName:(id)a1 excludingPIDs:(id)a2 error:(id *)a3;
- (char)_startTranscriptionForPID:(int)a0 error:(id *)a1;
- (id)_tapDescriptionForPID:(int)a0 tapFormat:(id)a1 excludePIDs:(id)a2;
- (void)handleInputBufferWithContext:(void *)a0 audioQueue:(struct OpaqueAudioQueue { } *)a1 audioBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a2 timestamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a3 packetCount:(unsigned int)a4 packetDesc:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a5;
- (char)isTranscribingForPID:(int)a0;
- (void)resetTranscription;
- (char)startTranscription:(id *)a0;
- (char)stopTranscription:(id *)a0;

@end
