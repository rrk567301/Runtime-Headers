@interface NUChannelAudioMediaFormat : NUChannelMediaFormat

+ (id)genericAudioFormat;

- (long long)mediaType;
- (id)init;
- (id)description;
- (BOOL)canSpecializeAudioMediaFormat:(id)a0;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (id)initWithMediaTemporality:(long long)a0;
- (BOOL)isCompatibleWithAudioMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (BOOL)isEqualToAudioMediaFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithAudioMediaFormat:(id)a0;
- (id)specializedWithComponentMediaFormat:(id)a0;
- (id)specializedWithMediaFormat:(id)a0;

@end
