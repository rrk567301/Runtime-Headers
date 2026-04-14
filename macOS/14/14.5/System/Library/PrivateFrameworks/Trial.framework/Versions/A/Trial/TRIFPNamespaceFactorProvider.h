@class NSCache, NSString, NSSet, NSMutableDictionary, TRIFBFastFactorLevels, TRIReferenceManagedDirReaderLock;
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
    BOOL _isFlatbufferReadEnabled;
    BOOL _isFlatbufferWriteEnabled;
    NSCache *_factorLevelCache;
    NSMutableDictionary *_warmupPersistentFactorLevelCache;
    TRIFBFastFactorLevels *_fastFactorLevels;
    NSString *_referencePath;
    NSString *_pbFactorPath;
    NSString *_fbFactorPath;
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
- (id)levelForFactor:(id)a0;
- (id)rolloutId;
- (unsigned int)namespaceId;
- (id)_readAllFactorLevelsFromStorage;
- (id)_factorLevelsWithFactorPackData:(id)a0 referencePath:(id)a1 outFactorPackId:(id *)a2 outNamespaceName:(id *)a3 outNCVs:(id *)a4;
- (void)cacheFactorLevels;
- (id)factorLevels;
- (id)initWithParentId:(id)a0 deploymentId:(int)a1 promotable:(BOOL)a2;
- (id)initWithPath:(id)a0 parentId:(id)a1 deploymentId:(int)a2 promotable:(BOOL)a3;
- (unsigned int)namespaceCompatibilityVersion;
- (void)setCacheSizeForFlatbuffers:(int)a0;

@end
