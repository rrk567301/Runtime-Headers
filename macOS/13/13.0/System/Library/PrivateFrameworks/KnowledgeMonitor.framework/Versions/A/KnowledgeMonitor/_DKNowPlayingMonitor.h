@class AVOutputContext, _DKEvent;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    unsigned int _bmSaveState;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)entitlements;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (id /* block */)_eventFilterBlock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)outputDevicesDidChange:(id)a0;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;

@end
