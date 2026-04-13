@class RCPPlayerPlaybackOptions;

@interface RCPPlayerDisplayLinkWaiter : NSObject

@property (nonatomic) long long linkCallbackCount;
@property (retain, nonatomic) RCPPlayerPlaybackOptions *options;

- (void).cxx_destruct;
- (void)displayLinkFired:(id)a0;
- (void)waitWithOptions:(id)a0;

@end
