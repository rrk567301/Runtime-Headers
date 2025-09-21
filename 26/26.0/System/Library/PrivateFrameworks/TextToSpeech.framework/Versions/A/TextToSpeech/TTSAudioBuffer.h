@class TTSAudioFormat, AVAudioPCMBuffer;

@interface TTSAudioBuffer : NSObject

@property (nonatomic, readonly) TTSAudioFormat *format;
@property (nonatomic, readonly) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (nonatomic, readonly) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *mutableAudioBufferList;
@property (nonatomic, readonly) AVAudioPCMBuffer *avBuffer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAVBuffer:(id)a0;
- (id)initWithFormat:(id)a0 frameCapacity:(unsigned int)a1;

@end
