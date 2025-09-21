@class SFMediaMetadata;

@interface SearchUIMediaUtilities : NSObject

@property (class, retain) SFMediaMetadata *currentMedia;
@property (class) char isPlaying;

+ (void)pausePlayback;
+ (void)resumePlayback;
+ (char)isCurrentMedia:(id)a0;
+ (id)localAudioCache;
+ (id)backingItemForMediaMetadataCache;
+ (char)bundleIdentifierSupportsOpenIntent:(id)a0;
+ (char)bundleIdentifierSupportsPlayIntent:(id)a0;
+ (void)canPlayAppleMusicWithCompletionHandler:(id /* block */)a0;
+ (void)dispatchOnMusicQueueIfNecessary:(id /* block */)a0;
+ (id)fallbackPunchoutWithMetadata:(id)a0 forBundleIdentifier:(id)a1;
+ (void)getMusicUserDisclosureApprovalStatusWithCompletionHandler:(id /* block */)a0;
+ (char)isCoreSpotlightMedia:(id)a0;
+ (char)isMediaItem:(id)a0 equalToMediaItem:(id)a1;
+ (char)isNowPlayingMedia:(id)a0;
+ (id)mediaSearchForMetadata:(id)a0;
+ (id)musicPlayer;
+ (id)musicPlayerQueue;
+ (id)musicStatusCache;
+ (void)playCoreSpotlightMedia:(id)a0;
+ (void)playMedia:(id)a0;
+ (void)resetPlayer;
+ (id)supportedIntentsForApp:(id)a0;
+ (void)updateBackingItemForMediaMetadata:(id)a0;

@end
