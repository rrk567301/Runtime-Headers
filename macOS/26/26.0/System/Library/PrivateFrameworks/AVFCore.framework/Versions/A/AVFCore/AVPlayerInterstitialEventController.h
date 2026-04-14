@class NSArray, NSBundle, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerInterstitialEventController : AVPlayerInterstitialEventMonitor {
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property (copy) NSArray *events;
@property (copy) NSBundle *localizedStringsBundle;
@property (copy) NSString *localizedStringsTableName;

+ (id)interstitialEventControllerWithPrimaryPlayer:(id)a0;

- (void)setEvents:(id)a0;
- (void)setCurrentRemoteEventSkippableState:(long long)a0;
- (void)dealloc;
- (void)_resetPlaybackCoordinatorTimelineExpectations;
- (void)skipCurrentEvent;
- (void)cancelCurrentEventWithResumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithPrimaryPlayer:(id)a0;
- (void)setCurrentRemoteEventSkippableState:(long long)a0 withLabel:(id)a1;
- (void)cancelCurrentEventWithReason:(id)a0;

@end
