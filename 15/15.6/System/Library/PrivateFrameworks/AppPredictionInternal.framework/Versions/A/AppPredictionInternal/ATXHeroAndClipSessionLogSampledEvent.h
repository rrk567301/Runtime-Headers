@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)init;
- (void).cxx_destruct;
- (id)location;
- (id)bundleId;
- (char)isClip;
- (id)initFromLaunch:(id)a0;

@end
