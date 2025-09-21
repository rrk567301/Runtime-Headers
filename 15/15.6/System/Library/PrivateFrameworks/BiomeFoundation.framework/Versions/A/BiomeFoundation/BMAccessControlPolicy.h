@class NSString, BMProcess, NSDictionary;

@interface BMAccessControlPolicy : NSObject {
    BMAccessControlPolicy *_onBehalfOf;
    unsigned long long _connectionFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_authorizedResources;
}

@property (readonly) char allowsConnectionToSetStoreUpdateService;
@property (readonly) char allowsConnectionToWriteService;
@property (readonly) char allowsAccessToProxyBiomeAgentEndpoint;
@property (readonly, nonatomic) BMProcess *process;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *descriptionOfProcessAndUseCase;
@property (readonly) char allowsAccessToSync;
@property (readonly) char allowsAccessToFlexibleStorage;
@property (readonly) char allowsConnectionToComputePublisherService;
@property (readonly) char allowsProxyingBiomeEndpoint;
@property (readonly) char allowsAccessToContextSync;

+ (id)library;
+ (char)_allowsCrossUserForConnection:(id)a0 useCase:(id)a1 error:(id *)a2;
+ (char)allowsConfiguringConnection:(id)a0 forUseCase:(id)a1 inDomain:(unsigned long long)a2 error:(id *)a3;
+ (id)contextSyncMapping;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 onBehalfOfProcessWithAccessControlPolicy:(id)a2;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;
+ (char)process:(id)a0 canActOnBehalfOfProcess:(id)a1;
+ (void)setLegacyViewResourceMappingCallback:(id /* block */)a0;
+ (id)syncableSetIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)_warnAboutInternalEntitlement:(id)a0 streamIdentifier:(id)a1;
- (unsigned long long)allowedModeForStream:(id)a0;
- (char)allowsAccessToAllSetsWithMode:(unsigned long long)a0;
- (char)allowsAccessToBiomeAgentForUser:(unsigned int)a0;
- (char)allowsAccessToClientCompute:(id)a0;
- (char)allowsAccessToContextSyncStreams:(id)a0;
- (char)allowsAccessToDatabase:(id)a0 withMode:(unsigned long long)a1;
- (char)allowsAccessToResource:(id)a0 withMode:(unsigned long long)a1;
- (char)allowsAccessToSet:(id)a0 withMode:(unsigned long long)a1;
- (char)allowsAccessToSetStoreUpdateServiceForSet:(id)a0;
- (char)allowsAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (char)allowsAccessToSyncMergeableDeltas;
- (char)allowsAccessToView:(id)a0 withMode:(unsigned long long)a1;
- (char)allowsAccessToWriteServiceForStream:(id)a0 ofUser:(unsigned int)a1;
- (char)allowsComputePublisherAccessToStreams:(id)a0;
- (char)allowsComputeSourceAccessToStream:(id)a0;
- (char)allowsConnectionToAccessServiceWithDomain:(unsigned long long)a0;
- (char)allowsConnectionToComputeSourceServiceWithDomain:(unsigned long long)a0;
- (id)authorizedResources;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)a0 withAccessMode:(unsigned long long)a1;
- (id)initWithProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;

@end
