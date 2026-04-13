@class VUISyndicationConfig, VUIDownloadConfig, VUIPostPlayConfig, VUINowPlayingConfig, VUILiveLinkConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig;

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIPostPlayConfig *postPlayConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig;
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig;
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig;
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig;
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
