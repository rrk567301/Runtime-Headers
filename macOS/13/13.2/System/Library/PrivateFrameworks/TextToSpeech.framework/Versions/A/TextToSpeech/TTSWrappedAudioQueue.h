@class NSMutableDictionary, NSCondition, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface TTSWrappedAudioQueue : NSObject <TTSSynthesisProviderAudioOutput> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
}

@property (nonatomic) struct OpaqueAudioQueue { } *aqRef;
@property (retain, nonatomic) AVAudioFormat *format;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSCondition *buffersAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueueDispatchQueue;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double lastActiveTime;
@property (nonatomic) BOOL shouldRebuildAudioQueue;
@property BOOL audioQueueActive;
@property (retain, nonatomic) NSMutableDictionary *inflightBuffers;
@property (retain, nonatomic) NSMutableDictionary *availableBuffers;
@property (nonatomic) unsigned int audioDevice;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)setOutputFormat:(id)a0;
- (BOOL)isRunning;
- (void)stop;
- (BOOL)play;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_play;
- (void)pokeAudio;
- (void)bufferCallback:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (unsigned long long)_minimumBufferByteSize;
- (void)_tearDownAudioQueue;
- (void)_rebuildAudioQueue;

@end
