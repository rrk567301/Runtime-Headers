@class NSString, BMProcess, NSDictionary;

@interface BMAccessControlPolicy : NSObject {
    BMAccessControlPolicy *_onBehalfOf;
    unsigned long long _connectionFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_authorizedResources;
}

@property (readonly) BOOL allowsConnectionToSetStoreUpdateService;
@property (readonly) BOOL allowsConnectionToWriteService;
@property (readonly) BOOL allowsAccessToProxyBiomeAgentEndpoint;
@property (readonly, nonatomic) BMProcess *process;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) BMAccessControlPolicy *onBehalfOfPolicy;
@property (readonly, nonatomic) NSString *descriptionOfProcessAndUseCase;
@property (readonly) BOOL allowsAccessToSync;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;
@property (readonly) BOOL allowsAccessToContextSync;

+ (id)library;
+ (id)syncableSetIdentifiers;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 onBehalfOfProcessWithAccessControlPolicy:(id)a2;
+ (void)setLegacyViewResourceMappingCallback:(id /* block */)a0;
+ (void)setLegacyStreamNameMappingCallback:(id /* block */)a0;
+ (BOOL)_allowsCrossUserForConnection:(id)a0 useCase:(id)a1 error:(id *)a2;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;
+ (void)setUUIDStreamNameMappingCallback:(id /* block */)a0;
+ (id)contextSyncMapping;
+ (BOOL)process:(id)a0 canActOnBehalfOfProcess:(id)a1;
+ (BOOL)allowsConfiguringConnection:(id)a0 forUseCase:(id)a1 inDomain:(unsigned long long)a2 error:(id *)a3;

- (BOOL)allowsAccessToDatabase:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToBiomeAgentForUser:(unsigned int)a0;
- (BOOL)identityMatchWithSourceIdentifier:(id)a0 appIdentifier:(id)a1;
- (BOOL)allowsAccessToResource:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToContextSyncStreams:(id)a0;
- (BOOL)allowsConnectionToUnentitledAccessServiceWithDomain:(unsigned long long)a0;
- (BOOL)allowsAccessToSyncMergeableDeltas;
- (BOOL)allowsAccessToSet:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsConnectionToComputeSourceServiceWithDomain:(unsigned long long)a0;
- (BOOL)allowsConnectionToEntitledAccessServiceWithDomain:(unsigned long long)a0;
- (BOOL)allowsAccessToView:(id)a0 withMode:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)allowsAccessToWriteServiceForStream:(id)a0 ofUser:(unsigned int)a1;
- (id)authorizedResources;
- (unsigned long long)allowedModeForStream:(id)a0;
- (BOOL)allowsTemporaryLocation;
- (id)init;
- (void)_warnAboutInternalEntitlement:(id)a0 streamIdentifier:(id)a1;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)a0 withAccessMode:(unsigned long long)a1;
- (BOOL)allowsAccessToAllSetsWithMode:(unsigned long long)a0;
- (BOOL)allowsComputeSourceAccessToStream:(id)a0;
- (id)initWithProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;
- (BOOL)allowsAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToClientCompute:(id)a0;
- (BOOL)allowsComputePublisherAccessToStreams:(id)a0;
- (BOOL)processIdentityMatchesSourceIdentifierForResource:(id)a0;
- (BOOL)isSpotlightInlineDonationSetIdentifier:(id)a0;

@end
