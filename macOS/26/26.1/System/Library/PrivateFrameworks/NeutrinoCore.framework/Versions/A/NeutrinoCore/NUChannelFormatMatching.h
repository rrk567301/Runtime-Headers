@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *channelFormat;

- (BOOL)match:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelFormat:(id)a0;

@end
