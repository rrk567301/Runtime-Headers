@interface PFPlaybackSettingsDefaults : NSObject <PFPlaybackSettingsDefaultsProvider>

@property (class, nonatomic, readonly) PFPlaybackSettingsDefaults *shared;

@property (nonatomic) float playbackRateGlobalValue;
@property (nonatomic) BOOL enhanceDialogueEnabledGlobalValue;

- (void).cxx_destruct;
- (id)init;

@end
