@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal *_ivars;
}

@property (readonly, getter=isAirPlayVideoActive) char airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) char airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (void)dealloc;
- (id)description;

@end
