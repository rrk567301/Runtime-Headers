@class NSString;

@interface IXPromotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance, IXCoordinatorWithTargetBundle, IXCoordinatorWithGatekeeperOverride>

@property (readonly, nonatomic) char hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasInstallOptions;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
