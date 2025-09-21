@class NSString, MRNowPlayingController, NSHashTable, NSDate, NSObject, AFInstanceContext;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOMediaNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_playbackStateGroup;
    long long _playbackStateGroupDepth;
    long long _playbackState;
    NSDate *_lastPlayingDate;
    NSHashTable *_listeners;
    AFInstanceContext *_instanceContext;
    MRNowPlayingController *_nowPlayingController;
    char _isProxyGroupPlayer;
    char _isObserving;
}

@property (readonly, nonatomic) long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)getPlaybackStateWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 instanceContext:(id)a1;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)controller:(id)a0 playbackQueueDidChangeFrom:(id)a1 to:(id)a2;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void)controllerWillReloadForInvalidation:(id)a0;
- (void)_beginGroup;
- (void)_endGroup;
- (void)_fetchLastPlayingDateWithCompletion:(id /* block */)a0;
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)a0 completion:(id /* block */)a1;
- (void)_handleGroupIdentifierUpdatesFromMediaRemoteActiveDeviceInfo:(id)a0;
- (void)_handleLastPlayingDateChangedTo:(id)a0;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)a0;
- (char)_isProxyGroupPlayer;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (char)_supportsProxyGroupPlayer;
- (void)_updateProxyGroupPlayerState;
- (void)getNowPlayingApplicationBundleIdentifier:(id /* block */)a0;
- (void)getNowPlayingInfoForCurrentItemWithCompletion:(id /* block */)a0;
- (void)getPlaybackStateAndLastPlayingDateWithCompletion:(id /* block */)a0;
- (void)getProxyGroupPlayerStateWithCompletion:(id /* block */)a0;
- (void)mediaRemoteActiveDeviceInfoDidChange:(id)a0;
- (void)mediaRemoteNowPlayingApplicationPlaybackStateDidChange:(id)a0;
- (void)mediaRemoteNowPlayingInfoDidChange:(id)a0;

@end
