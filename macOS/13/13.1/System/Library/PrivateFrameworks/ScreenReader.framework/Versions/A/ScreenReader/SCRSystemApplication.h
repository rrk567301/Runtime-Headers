@interface SCRSystemApplication : SCRApplication

- (BOOL)isSystemApplication;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 pid:(int)a1 name:(id)a2 bundleIdentifier:(id)a3 bundleVersion:(id)a4 url:(id)a5;
- (void)reloadApplicationFrontmostStatus;
- (void)elementWasDestroyed:(id)a0;
- (id)fullNameDescription;
- (BOOL)applicationNeedsWindows;
- (void)announceWindowExists;
- (void)_announceWindowExists;

@end
