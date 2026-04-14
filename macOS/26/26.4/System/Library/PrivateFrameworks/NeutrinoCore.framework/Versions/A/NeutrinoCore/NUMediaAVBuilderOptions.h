@class NUChannel;

@interface NUMediaAVBuilderOptions : NSObject

@property (class, readonly, nonatomic) NUMediaAVBuilderOptions *defaultOptions;

@property (copy, nonatomic) NUChannel *channelToRender;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannel:(id)a0;

@end
