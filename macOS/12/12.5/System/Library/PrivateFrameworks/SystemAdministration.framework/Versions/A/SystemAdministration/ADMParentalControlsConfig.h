@interface ADMParentalControlsConfig : NSObject

+ (id)sharedConfig;

- (void)updateDSAppsForUser:(id)a0 bundleIDs:(id)a1 kickMCX:(BOOL)a2;
- (void)setRemoteListening:(BOOL)a0;

@end
