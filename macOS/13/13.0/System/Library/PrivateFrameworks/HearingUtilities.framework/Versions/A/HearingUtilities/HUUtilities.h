@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    NSDictionary *_pickableRoutes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _routingLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;

+ (id)sharedUtilities;
+ (BOOL)shouldUseMultideviceV3;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deviceIsTinker;
- (void)registerNotifications;
- (void)mediaServerDied;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (id)currentPickableAudioRoutesIfExist;
- (id)currentPickableAudioRoutes;
- (unsigned long long)backgroundSoundsRouteDecision;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (void)clearAudioRoutes;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (void)updateHearingFeatureUsage;

@end
