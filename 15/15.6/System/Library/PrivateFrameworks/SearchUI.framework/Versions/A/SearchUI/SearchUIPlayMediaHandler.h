@class SFPlayMediaCommand;

@interface SearchUIPlayMediaHandler : SearchUIMediaHandler

@property (retain) SFPlayMediaCommand *command;

- (unsigned long long)destination;
- (id)intent;
- (id)mediaMetadata;
- (char)canPlayIntent;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)performIntent:(id)a0 withBundleIdentifier:(id)a1;
- (void)sendPlaybackFinishedNotification;
- (char)supportsIntentPath;

@end
