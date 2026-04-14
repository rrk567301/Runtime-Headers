@class NSDictionary, NUChannelComponentMediaFormat;

@interface NUChannelContainerMediaFormat : NUChannelMediaFormat

@property (readonly, nonatomic) NUChannelComponentMediaFormat *componentFormat;
@property (readonly, nonatomic) long long containerMediaType;
@property (readonly, copy, nonatomic) NSDictionary *components;

+ (id)imageContainerWithChannels:(id)a0 error:(out id *)a1;
+ (id)livePhotoContainerWithImageChannels:(id)a0 videoChannels:(id)a1 error:(out id *)a2;
+ (id)livePhotoContainerWithImageFormat:(id)a0 videoFormat:(id)a1;
+ (id)videoContainerWithChannels:(id)a0 error:(out id *)a1;

- (id)debugDescription;
- (long long)mediaType;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)canSpecializeMediaFormat:(id)a0;
- (id)channelMatching:(id)a0;
- (id)elementChannel;
- (id)initWithContainerMediaType:(long long)a0 components:(id)a1;
- (id)initWithMediaTemporality:(long long)a0;
- (BOOL)isCompatibleWithContainerMediaFormat:(id)a0;
- (BOOL)isCompatibleWithMediaFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (id)subchannelFormatForKey:(id)a0;
- (id)subchannelKeys;

@end
