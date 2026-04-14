@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *channelFormat;

- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithChannelFormat:(id)a0;

@end
