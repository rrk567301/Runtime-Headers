@class CSAudioInjectionFileOption, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProviderExclave : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct OpaqueAudioQueue { } *exclaveAudioQueue;
@property (nonatomic) BOOL isAudioQueueStarted;
@property (nonatomic) double bufferDuration;
@property (retain, nonatomic) CSAudioInjectionFileOption *fileOption;
@property (copy, nonatomic) id /* block */ injectionCompletion;
@property (nonatomic) unsigned long long injectionStartTime;
@property (nonatomic) unsigned long long injectionEndTime;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })_defaultOutASBD;
- (void)_createAudioQueueIfNeeded;
- (struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)_defaultBufferRef;
- (void)_prepareAndStartAudioQueue;
- (void)_readAudioBufferAndFeedIntoAudioQueue;
- (void)_setAudioSessionActive:(BOOL)a0;
- (void)speakAudioInExclave:(id)a0 withCompletion:(id /* block */)a1;

@end
