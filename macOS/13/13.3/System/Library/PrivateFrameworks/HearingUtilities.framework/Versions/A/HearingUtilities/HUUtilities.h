@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    NSDictionary *_pickableRoutes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _routingLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)mediaServerDied;
- (BOOL)deviceIsTinker;
- (void)registerNotifications;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (id)currentPickableAudioRoutesIfExist;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (void)updateHearingFeatureUsage;

@end
