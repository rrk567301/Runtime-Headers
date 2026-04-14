@interface NUChannelMetadataFormat : NUChannelFormat

@property (readonly, nonatomic) long long metadataType;

- (long long)channelType;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMetadataType:(long long)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;

@end
