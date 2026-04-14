@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)location;
- (void).cxx_destruct;
- (id)init;
- (id)bundleId;
- (BOOL)isClip;
- (id)initFromLaunch:(id)a0;

@end
