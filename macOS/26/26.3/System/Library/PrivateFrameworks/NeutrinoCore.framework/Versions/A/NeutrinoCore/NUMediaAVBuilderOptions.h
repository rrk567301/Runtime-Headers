@class NUChannel;

@interface NUMediaAVBuilderOptions : NSObject

@property (class, readonly, nonatomic) NUMediaAVBuilderOptions *defaultOptions;

@property (copy, nonatomic) NUChannel *channelToRender;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
