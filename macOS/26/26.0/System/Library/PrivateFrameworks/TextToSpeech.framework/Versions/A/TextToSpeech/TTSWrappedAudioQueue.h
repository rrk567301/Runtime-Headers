@class TTSAudioFormat, NSString, AVAudioConverter, NSDictionary, NSObject, NSMutableOrderedSet, NSNumber, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface TTSWrappedAudioQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioQueueLock;
}

@property (nonatomic) struct OpaqueAudioQueue { } *aqRef;
@property (nonatomic) struct OpaqueATAudioProcessingNode { } *procNodeRef;
@property (retain, nonatomic) AVAudioFormat *queueFormat;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL shouldRebuildAudioQueue;
@property (readonly) BOOL audioQueueActive;
@property (retain, nonatomic) NSMutableOrderedSet *inflightBuffers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) AVAudioConverter *cachedAudioConverter;
@property (retain, nonatomic) NSNumber *currentSilenceBufferCount;
@property (nonatomic) BOOL needsParameterSync;
@property (nonatomic) BOOL needsPropertySync;
@property (retain, nonatomic) NSString *dspGraph;
@property (retain, nonatomic) NSDictionary *graphParameters;
@property (retain, nonatomic) NSDictionary *graphProperties;
@property (nonatomic) unsigned int audioDevice;
@property (retain, nonatomic) TTSAudioFormat *outputFormat;
@property (nonatomic) unsigned int audioQueueFlags;

- (void)pause;
- (void)dealloc;
- (void)stop;
- (void)_configureEffects;
- (id)init;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (BOOL)play;
- (void)bufferCallback:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (BOOL)_attemptQueueStart;
- (void)_buildAudioQueue;
- (void)_initializeDSPGraphAU;
- (unsigned long long)_minimumBufferByteSize;
- (void)_rebuildAudioQueue;
- (void)_reconfigureQueueFormatForMultiChannelOutputIfNecessary;
- (BOOL)_startQueueWithRetry;
- (void)_syncGraphParameters;
- (void)_syncGraphProperties;
- (void)_tearDownAudioQueue;
- (void)_tearDownDSPGraphAU;
- (id)convertBufferIfNecessary:(id)a0;
- (void)handleMediaServicesReset;
- (void)playBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })queueStreamDescription;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1 lastBuffer:(BOOL)a2;

@end
