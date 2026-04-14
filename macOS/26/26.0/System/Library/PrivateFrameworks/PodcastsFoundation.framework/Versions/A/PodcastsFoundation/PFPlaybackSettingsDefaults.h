@interface PFPlaybackSettingsDefaults : NSObject <PFPlaybackSettingsDefaultsProvider>

@property (class, nonatomic, readonly) PFPlaybackSettingsDefaults *shared;

@property (nonatomic) float playbackRateGlobalValue;
@property (nonatomic) BOOL enhanceDialogueEnabledGlobalValue;

- (id)init;
- (void).cxx_destruct;

@end
