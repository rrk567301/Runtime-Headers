@class IPAVideoPlaybackSettings, PLEditSource;

@interface IPAVideoPlaybackSettingsCompositionProvider : NSObject <DGDescriptionCompositionProvider> {
    IPAVideoPlaybackSettings *_playbackSettings;
    long long _orientation;
    PLEditSource *_source;
}

- (void).cxx_destruct;
- (id)source;
- (long long)orientation;
- (id)composition;
- (id)renderDescription;
- (id)editDescription;
- (id)playbackSettings;
- (id)initWithPlaybackSettings:(id)a0 orientation:(long long)a1 source:(id)a2;

@end
