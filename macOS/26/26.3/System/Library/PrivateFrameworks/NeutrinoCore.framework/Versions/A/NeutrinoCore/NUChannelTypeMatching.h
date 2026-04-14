@interface NUChannelTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long channelType;

- (id)description;
- (id)init;
- (BOOL)match:(id)a0;
- (id)initWithChannelType:(long long)a0;

@end
