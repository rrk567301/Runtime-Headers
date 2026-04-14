@class NSArray, OBPrivacySplashController;

@interface OBPrivacyCombinedController_macOS : OBPrivacyCombinedController {
    OBPrivacySplashController *splashController;
    NSArray *_bundleIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (void)prepareToPresent;

@end
