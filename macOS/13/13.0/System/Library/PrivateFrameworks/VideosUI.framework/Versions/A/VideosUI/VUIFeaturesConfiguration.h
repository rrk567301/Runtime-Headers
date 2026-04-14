@class VUIPlaybackUpNextConfig, VUIDownloadConfig, VUIMediaShowcasingConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIContextMenuConfig, VUILiveLinkConfig, VUIUpNextConfig, VUICanonicalConfig, VUISyndicationConfig, VUIInAppMessagesConfig, VUIDropOnTabConfig, VUIAccountConfig;

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig;
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig;
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig;
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig;
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig;
@property (readonly, nonatomic) VUIDropOnTabConfig *dropOnTabConfig;
@property (readonly, nonatomic) VUIMediaShowcasingConfig *mediaShowcaseConfig;
@property (readonly, nonatomic) VUIUpNextConfig *upNextConfig;
@property (readonly, nonatomic) VUIContextMenuConfig *contextMenuConfig;
@property (readonly, nonatomic) VUICanonicalConfig *canonicalConfig;
@property (readonly, nonatomic) VUIAccountConfig *accountConfig;

+ (id)sharedInstance;
+ (id)defaultsNumberValueForKey:(id)a0;
+ (id)defaultsStringValueForKey:(id)a0;
+ (id)numberValueForKey:(id)a0 fromDictionary:(id)a1;
+ (BOOL)boolValueForKey:(id)a0 fromDictionary:(id)a1 defaultValue:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (void)parseUpNextConfig:(id)a0;
- (void)_populateMediaShowcaseConfig:(id)a0;
- (void)_populateCanonicalConfig:(id)a0;
- (void)_populateAccountConfig:(id)a0;
- (void)_updateTVSettingsIfNeeded:(BOOL)a0;

@end
