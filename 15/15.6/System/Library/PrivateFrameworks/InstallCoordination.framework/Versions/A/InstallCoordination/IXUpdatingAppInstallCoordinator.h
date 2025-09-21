@class NSString;

@interface IXUpdatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance, IXCoordinatorWithRemovabilityState, IXCoordinatorWithPostProcessingPromises, IXCoordinatorWithEssentialAssetPromises, IXCoordinatorWithTargetBundle, IXCoordinatorWithAppQuitPromise, IXCoordinatorWithManagedInstallUUID, IXCoordinatorWithGatekeeperOverride>

@property (readonly, nonatomic) char hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasInstallOptions;
@property (readonly, nonatomic) char hasInitialODRAssetPromises;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
