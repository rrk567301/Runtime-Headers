@class NSString, NSSet, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIFactorPackId;

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_parentId;
    int _deploymentId;
    NSString *_namespaceName;
    NSSet *_namespaceCompatibilityVersions;
    NSString<TRIFactorPackId> *_factorPackId;
    id<TRIFactorLevelCaching> _factorLevels;
    TRIReferenceManagedDirReaderLock *_dirLock;
    NSString *_lockingClientIdentifier;
}

@property (readonly, nonatomic) BOOL promotable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dispose;
- (id)experimentId;
- (id)namespaceName;
- (id)treatmentId;
- (int)deploymentId;
- (id)rolloutId;
- (unsigned int)namespaceId;
- (unsigned int)namespaceCompatibilityVersion;
- (id)levelForFactor:(id)a0;
- (id)factorLevels;
- (id)initWithParentId:(id)a0 deploymentId:(int)a1 promotable:(BOOL)a2;
- (id)initWithPath:(id)a0 parentId:(id)a1 deploymentId:(int)a2 promotable:(BOOL)a3;
- (id)_factorLevelsWithFactorPackData:(id)a0 loadedFromProtoPath:(id)a1 referencePath:(id)a2 outFactorPackId:(id *)a3 outNamespaceName:(id *)a4 outNCVs:(id *)a5;
- (id)_maAutoAssetReferencedInDir:(id)a0 byFactorName:(id)a1;
- (id)_populateMAPathsForFactorLevels:(id)a0 loadedFromProtoPath:(id)a1;

@end
