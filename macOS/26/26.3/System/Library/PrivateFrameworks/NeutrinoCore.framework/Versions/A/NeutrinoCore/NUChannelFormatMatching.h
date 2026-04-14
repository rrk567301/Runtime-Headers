@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *channelFormat;

- (id)description;
- (id)init;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannelFormat:(id)a0;

@end
