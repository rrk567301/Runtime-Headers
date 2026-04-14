@class _DKEvent, NSDictionary, BMSource, AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSDictionary *_previousBiomeEventMetadata;
    unsigned int _bmSaveState;
    BMSource *_nowPlayingSource;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)_bmEventWithDKEvent:(id)a0 outputDevices:(id)a1 biomeEventMetadata:(id)a2 excludeFromSuggestions:(BOOL)a3;
+ (id /* block */)_eventFilterBlock;
+ (id)eventStream;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)_stripMetadata:(id)a0;
- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3 excludeFromSuggestions:(BOOL)a4;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;
- (void)deactivate;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_registerForNowPlayingNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)outputDevicesDidChange:(id)a0;
- (void)dealloc;

@end
