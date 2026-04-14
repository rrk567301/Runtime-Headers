@interface NUChannelImageMediaFormat : NUChannelMediaFormat

@property (readonly, nonatomic) long long imageMediaType;

+ (id)genericImageFormat;
+ (id)genericImageFormat:(long long)a0;
+ (id)stillImageFormat:(long long)a0;
+ (id)videoImageFormat:(long long)a0;

- (long long)mediaType;
- (id)description;
- (unsigned long long)hash;
- (BOOL)canSpecializeComponentMediaFormat:(id)a0;
- (BOOL)canSpecializeImageMediaFormat:(id)a0;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (id)initWithImageMediaType:(long long)a0 temporality:(long long)a1;
- (id)initWithMediaTemporality:(long long)a0;
- (BOOL)isCompatibleWithImageMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isEqualToImageMediaFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithComponentMediaFormat:(id)a0;
- (id)specializedWithImageMediaFormat:(id)a0;
- (id)specializedWithMediaFormat:(id)a0;

@end
