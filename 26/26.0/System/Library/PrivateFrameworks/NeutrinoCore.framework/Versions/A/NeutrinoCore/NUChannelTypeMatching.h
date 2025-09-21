@interface NUChannelTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long channelType;

- (id)init;
- (id)description;
- (BOOL)match:(id)a0;
- (id)initWithChannelType:(long long)a0;

@end
