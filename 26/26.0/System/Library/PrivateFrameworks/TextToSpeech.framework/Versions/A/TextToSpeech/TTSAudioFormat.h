@class AVAudioFormat;

@interface TTSAudioFormat : NSObject

@property (nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } streamDescription;
@property (nonatomic) unsigned int channelLayoutTag;
@property (nonatomic, readonly) AVAudioFormat *avFormat;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) unsigned int channelCount;

- (id)initWithStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 channelLayoutTag:(unsigned int)a1;

@end
