@class SFPlayMediaCommand;

@interface SearchUIPlayMediaHandler : SearchUIMediaHandler

@property (retain) SFPlayMediaCommand *command;

- (id)intent;
- (unsigned long long)destination;
- (id)mediaMetadata;
- (id)destinationApplicationIconImage;
- (BOOL)canPlayIntent;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)performIntent:(id)a0 withBundleIdentifier:(id)a1;
- (void)sendPlaybackFinishedNotification;
- (BOOL)supportsIntentPath;

@end
