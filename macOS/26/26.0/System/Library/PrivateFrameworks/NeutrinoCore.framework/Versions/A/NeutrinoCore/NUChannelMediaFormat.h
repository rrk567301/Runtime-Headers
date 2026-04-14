@interface NUChannelMediaFormat : NUChannelFormat

@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long temporality;

- (long long)channelType;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)canSpecializeComponentMediaFormat:(id)a0;
- (BOOL)canSpecializeFormat:(id)a0;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (id)initWithMediaTemporality:(long long)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isCompatibleWithComponentMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (id)specializedWithComponentMediaFormat:(id)a0;
- (id)specializedWithFormat:(id)a0;
- (id)specializedWithMediaFormat:(id)a0;

@end
