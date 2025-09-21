@interface NUChannelMediaFormat : NUChannelFormat

@property (readonly, nonatomic) long long mediaType;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMediaType:(long long)a0;
- (long long)channelType;
- (char)isCompatibleWithChannelFormat:(id)a0;
- (char)isEqualToChannelFormat:(id)a0;

@end
