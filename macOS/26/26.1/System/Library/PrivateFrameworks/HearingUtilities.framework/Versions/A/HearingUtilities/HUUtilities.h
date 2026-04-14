@class HURoutesManager, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

+ (id)sharedUtilities;
+ (BOOL)shouldUseMultideviceV3;
+ (id)objectFromXDCObject:(id)a0;
+ (id)XDCObjectFromObject:(id)a0;

- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (BOOL)headphoneStreamSelectedForAddresses:(id)a0;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (BOOL)wirelessSplitterEnabled;
- (BOOL)hearingAidStreamSelected;
- (unsigned long long)backgroundSoundsRouteDecision;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (id)currentPickableAudioRoutes;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)updateHearingFeatureUsage;
- (void)updateWirelessSplitterState;
- (void)clearAudioRoutes;
- (void)dealloc;
- (id)currentPickableAudioRoutesIfExist;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (void).cxx_destruct;
- (BOOL)deviceIsTinker;
- (BOOL)deviceIsCounterfeit:(id)a0;
- (BOOL)headphoneStreamSelected;
- (BOOL)hearingAidRouteAvailable;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (id)init;

@end
