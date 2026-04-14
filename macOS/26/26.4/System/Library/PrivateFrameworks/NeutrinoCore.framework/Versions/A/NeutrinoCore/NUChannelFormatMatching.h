@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *channelFormat;

- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithChannelFormat:(id)a0;

@end
