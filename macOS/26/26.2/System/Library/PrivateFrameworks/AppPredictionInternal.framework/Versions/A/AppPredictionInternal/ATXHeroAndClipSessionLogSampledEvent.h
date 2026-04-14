@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)bundleId;
- (void).cxx_destruct;
- (id)location;
- (id)init;
- (BOOL)isClip;
- (id)initFromLaunch:(id)a0;

@end
