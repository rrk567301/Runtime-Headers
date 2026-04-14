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
+ (id)XDCObjectFromObject:(id)a0;
+ (id)sharedUtilities;
+ (BOOL)shouldUseMultideviceV3;

- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (BOOL)headphoneStreamSelectedForAddresses:(id)a0;
- (id)init;
- (id)currentPickableAudioRoutes;
- (BOOL)deviceIsTinker;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (BOOL)headphoneStreamSelected;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (id)currentPickableAudioRoutesIfExist;
- (void).cxx_destruct;
- (BOOL)wirelessSplitterEnabled;
- (void)updateWirelessSplitterState;
- (void)dealloc;
- (void)updateHearingFeatureUsage;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (void)clearAudioRoutes;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (BOOL)deviceIsCounterfeit:(id)a0;
- (BOOL)hearingAidRouteAvailable;
- (BOOL)hearingAidStreamSelected;
- (unsigned long long)backgroundSoundsRouteDecision;

@end
