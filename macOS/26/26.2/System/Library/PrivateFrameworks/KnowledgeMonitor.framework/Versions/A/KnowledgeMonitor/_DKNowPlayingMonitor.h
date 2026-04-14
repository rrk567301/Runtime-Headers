@class _DKEvent, NSDictionary, BMSource, AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSDictionary *_previousBiomeEventMetadata;
    unsigned int _bmSaveState;
    BMSource *_nowPlayingSource;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (id)_bmEventWithDKEvent:(id)a0 outputDevices:(id)a1 biomeEventMetadata:(id)a2 excludeFromSuggestions:(BOOL)a3;
+ (id)eventStream;
+ (id /* block */)_eventFilterBlock;

- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3 excludeFromSuggestions:(BOOL)a4;
- (void).cxx_destruct;
- (void)start;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (id)init;
- (void)deactivate;
- (void)_registerForNowPlayingNotifications;
- (void)outputDevicesDidChange:(id)a0;
- (void)_stripMetadata:(id)a0;
- (void)dealloc;

@end
