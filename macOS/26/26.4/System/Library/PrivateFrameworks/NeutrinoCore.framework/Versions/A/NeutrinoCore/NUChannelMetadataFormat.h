@interface NUChannelMetadataFormat : NUChannelFormat

@property (readonly, nonatomic) long long metadataType;

- (long long)channelType;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithMetadataType:(long long)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;

@end
