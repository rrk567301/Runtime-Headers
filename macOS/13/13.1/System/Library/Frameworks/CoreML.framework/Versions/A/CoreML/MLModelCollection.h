@class NSDictionary, NSString, TRIClient;

@interface MLModelCollection : NSObject

@property (copy, nonatomic) NSDictionary *entries;
@property (copy, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)beginAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (Class)getTrialClientClass;
+ (Class)getTrialExperimentIdentifiersClass;
+ (Class)getTrialDownloadOptionsClass;
+ (Class)getTrialFactorLevelClass;
+ (Class)getTrialLevelClass;
+ (Class)getTrialFileClass;
+ (Class)getTrialFactorClass;
+ (id)_namespaceNameFromCollectionIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_register;
- (BOOL)_downloadWithProgress:(id /* block */)a0;
- (id)_downloadOptions;
- (void)_registerForUpdates;
- (BOOL)_endAccess;
- (void)_handleTrialUpdateForNamespaceName:(id)a0;
- (void)_setDeploymentID;
- (void)_populateEntries;

@end
