@interface ADMParentalControlsConfig : NSObject

+ (id)sharedConfig;

- (void)setRemoteListening:(char)a0;
- (void)updateDSAppsForUser:(id)a0 bundleIDs:(id)a1 kickMCX:(char)a2;

@end
