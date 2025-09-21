@class AVAudioSharedBufferToken;

@interface AVAudioSharedPCMBuffer : AVAudioPCMBuffer

@property (readonly, nonatomic) AVAudioSharedBufferToken *sharedBufferToken;
@property (readonly, nonatomic) BOOL backedBySharedMemory;

- (id)initWithPCMFormat:(id)a0 frameCapacity:(unsigned int)a1;
- (id)initWithPCMFormat:(id)a0 sharedBufferToken:(id)a1;

@end
