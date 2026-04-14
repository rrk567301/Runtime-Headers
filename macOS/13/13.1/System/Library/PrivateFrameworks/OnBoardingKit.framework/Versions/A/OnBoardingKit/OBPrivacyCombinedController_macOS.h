@class NSArray, OBPrivacySplashController;

@interface OBPrivacyCombinedController_macOS : OBPrivacyCombinedController {
    OBPrivacySplashController *splashController;
}

@property (retain) NSArray *bundles;
@property (retain) NSArray *privacyFlowGroups;

- (void).cxx_destruct;
- (void)prepareToPresent;
- (id)initWithBundles:(id)a0;
- (id)flowsFromBundles:(id)a0;

@end
