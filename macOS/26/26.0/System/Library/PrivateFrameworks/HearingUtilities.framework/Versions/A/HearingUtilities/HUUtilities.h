@class HURoutesManager, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

+ (id)objectFromXDCObject:(id)a0;
+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;

- (unsigned long long)backgroundSoundsRouteDecision;
- (BOOL)wirelessSplitterEnabled;
- (void)dealloc;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (BOOL)hearingAidStreamSelected;
- (void)updateWirelessSplitterState;
- (id)init;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (BOOL)headphoneStreamSelected;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (id)currentPickableAudioRoutes;
- (void)clearAudioRoutes;
- (BOOL)headphoneStreamSelectedForAddresses:(id)a0;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (BOOL)hearingAidRouteAvailable;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (void)updateHearingFeatureUsage;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (id)currentPickableAudioRoutesIfExist;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)deviceIsTinker;

@end
