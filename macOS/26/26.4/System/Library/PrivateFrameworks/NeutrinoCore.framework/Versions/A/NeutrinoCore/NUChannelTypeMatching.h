@interface NUChannelTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long channelType;

- (BOOL)match:(id)a0;
- (id)init;
- (id)description;
- (id)initWithChannelType:(long long)a0;

@end
