@class NSDictionary, NSString, TRIClient;

@interface MLModelCollection : NSObject

@property (copy, nonatomic) NSDictionary *entries;
@property (copy, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)_namespaceNameFromCollectionIdentifier:(id)a0;
+ (Class)getTrialClientClass;
+ (Class)getTrialDownloadOptionsClass;
+ (id)beginAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (Class)getTrialExperimentIdentifiersClass;
+ (Class)getTrialFactorLevelClass;
+ (Class)getTrialLevelClass;
+ (Class)getTrialFileClass;
+ (Class)getTrialFactorClass;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_register;
- (BOOL)_downloadWithProgress:(id /* block */)a0;
- (void)_populateEntries;
- (void)_setDeploymentID;
- (void)_registerForUpdates;
- (BOOL)_endAccess;
- (id)_downloadOptions;
- (void)_handleTrialUpdateForNamespaceName:(id)a0;

@end
