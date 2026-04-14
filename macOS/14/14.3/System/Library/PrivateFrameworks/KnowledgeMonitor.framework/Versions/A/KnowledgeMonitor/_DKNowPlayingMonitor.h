@class AVOutputContext, _DKEvent, NSDictionary;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSDictionary *_previousBiomeEventMetadata;
    unsigned int _bmSaveState;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_bmEventWithDKEvent:(id)a0 outputDevices:(id)a1 biomeEventMetadata:(id)a2;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void)_stripMetadata:(id)a0 forBundleId:(id)a1;
- (void)outputDevicesDidChange:(id)a0;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3;

@end
