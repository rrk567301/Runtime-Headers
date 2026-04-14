@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *channelFormat;

- (id)init;
- (id)description;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannelFormat:(id)a0;

@end
