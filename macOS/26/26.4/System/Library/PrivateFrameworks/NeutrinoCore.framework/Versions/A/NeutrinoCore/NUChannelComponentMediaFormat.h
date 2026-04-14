@interface NUChannelComponentMediaFormat : NUChannelMediaFormat

@property (readonly, nonatomic) long long componentMediaType;

+ (id)genericImageComponentFormat;
+ (id)genericMediaComponentFormat;
+ (id)genericVideoComponentFormat;

- (long long)mediaType;
- (id)description;
- (BOOL)canSpecializeComponentMediaFormat:(id)a0;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (id)initWithComponentMediaType:(long long)a0 temporality:(long long)a1;
- (id)initWithMediaTemporality:(long long)a0;
- (BOOL)isCompatibleWithComponentMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isEqualToComponentMediaFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithComponentMediaFormat:(id)a0;
- (id)specializedWithMediaFormat:(id)a0;

@end
