@interface CSPostBuildInstallService : NSObject

+ (id)sharedService;

- (void)registerPostBuildInstallService;
- (id)_cleanupVoiceProfiles;
- (void)_performPostBuildInstallWithCompletion:(id /* block */)a0;

@end
