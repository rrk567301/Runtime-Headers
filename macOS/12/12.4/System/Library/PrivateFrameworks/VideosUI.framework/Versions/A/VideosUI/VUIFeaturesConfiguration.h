@class VUIAutoPlayConfig, VUIDownloadConfig, VUILiveLinkConfig, VUISyndicationConfig, VUIUpNextConfig, VUIInAppMessagesConfig, VUIPlaybackUpNextConfig, VUIDropOnTabConfig, VUINowPlayingConfig;

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig;
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig;
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig;
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig;
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig;
@property (readonly, nonatomic) VUIDropOnTabConfig *dropOnTabConfig;
@property (readonly, nonatomic) VUIUpNextConfig *upNextConfig;

+ (id)sharedInstance;
+ (id)stringValueForKey:(id)a0;
+ (id)numberValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (void)parseUpNextConfig:(id)a0;

@end
