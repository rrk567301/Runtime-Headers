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
+ (id)objectFromXDCObject:(id)a0;
+ (id)XDCObjectFromObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;

- (BOOL)currentRouteSupportsBackgroundSounds;
- (BOOL)wirelessSplitterEnabled;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (BOOL)hearingAidRouteAvailable;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)clearAudioRoutes;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (BOOL)headphoneStreamSelectedForAddresses:(id)a0;
- (BOOL)headphoneStreamSelected;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (void).cxx_destruct;
- (BOOL)deviceIsTinker;
- (id)currentPickableAudioRoutesIfExist;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)updateHearingFeatureUsage;
- (void)updateWirelessSplitterState;
- (BOOL)hearingAidStreamSelected;
- (id)init;
- (BOOL)deviceIsCounterfeit:(id)a0;
- (id)currentPickableAudioRoutes;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (void)dealloc;

@end
