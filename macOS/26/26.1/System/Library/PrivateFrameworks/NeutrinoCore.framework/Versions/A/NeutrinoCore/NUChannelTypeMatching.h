@interface NUChannelTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long channelType;

- (BOOL)match:(id)a0;
- (id)description;
- (id)init;
- (id)initWithChannelType:(long long)a0;

@end
