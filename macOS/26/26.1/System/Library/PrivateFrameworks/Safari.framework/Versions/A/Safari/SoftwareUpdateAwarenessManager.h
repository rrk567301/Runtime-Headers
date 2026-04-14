@class NSString, NSArray, SUOSUSafariController;

@interface SoftwareUpdateAwarenessManager : NSObject <SUOSUSafariControllerDelegate> {
    SUOSUSafariController *_updateController;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *rankedFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)operatingSystemVersionString;
- (id)metadataKeys;
- (void)availableContentDidChange;
- (id)hardwareModelString;
- (BOOL)_isSoftwareUpdateAwarenessFeatureEligibleToBeShownBasedOnMetadata:(id)a0;
- (id)safariVersionString;

@end
