@class HURoutesManager, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    int _wirelessSplitterNotifyToken;
    char _wirelessSplitterEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) char takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;
+ (char)shouldUseMultideviceV3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)deviceIsTinker;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (id)currentPickableAudioRoutesIfExist;
- (char)currentRouteSupportsBackgroundSounds;
- (char)headphoneStreamSelected;
- (char)headphoneStreamSelectedForAddresses:(id)a0;
- (char)hearingAidRouteAvailable;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (char)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (char)hearingAidStreamSelected;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (char)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (void)pauseNowPlaying:(char)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (void)updateHearingFeatureUsage;
- (void)updateWirelessSplitterState;
- (char)wirelessSplitterEnabled;

@end
