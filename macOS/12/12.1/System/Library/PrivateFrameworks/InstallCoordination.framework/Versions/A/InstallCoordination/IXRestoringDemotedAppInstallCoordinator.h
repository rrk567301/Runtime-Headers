@class NSString;

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXCoordinatorWithImportance, IXCoordinatorWithTargetDirectory>

@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coordinatorForAppWithBundleID:(id)a0 withClientID:(unsigned long long)a1 createIfNotExisting:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (id)existingCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;
+ (BOOL)enumerateCoordinatorsWithError:(id *)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)a0;

- (id)validInstallTypes;

@end
