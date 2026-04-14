@class NSString, NSSet, NSMutableDictionary, TRIFBFastFactorLevels, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIFactorPackId;

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_parentId;
    int _deploymentId;
    NSString *_namespaceName;
    NSSet *_namespaceCompatibilityVersions;
    id<TRIFactorLevelCaching> _factorLevels;
    NSString *_treatmentId;
    TRIReferenceManagedDirReaderLock *_dirLock;
    BOOL _isFlatbufferReadEnabled;
    BOOL _isFlatbufferWriteEnabled;
    NSMutableDictionary *_warmupPersistentFactorLevelCache;
    TRIFBFastFactorLevels *_fastFactorLevels;
    NSString *_referencePath;
    NSString *_pbFactorPath;
    NSString *_fbFactorPath;
}

@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) BOOL promotable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)deploymentId;
- (id)treatmentId;
- (id)rolloutId;
- (id)experimentId;
- (id)initWithParentId:(id)a0 deploymentId:(int)a1 promotable:(BOOL)a2;
- (id)levelForFactor:(id)a0;
- (id)_readAllFactorLevelsFromStorage;
- (id)factorLevels;
- (id)_factorLevelsWithFactorPackData:(id)a0 referencePath:(id)a1 outFactorPackId:(id *)a2 outNamespaceName:(id *)a3 outNCVs:(id *)a4;
- (unsigned int)namespaceCompatibilityVersion;
- (void)dispose;
- (void)dealloc;
- (unsigned int)namespaceId;
- (void).cxx_destruct;
- (void)cacheFactorLevels;
- (id)namespaceName;
- (id)init;
- (id)initWithPath:(id)a0 parentId:(id)a1 deploymentId:(int)a2 treatmentId:(id)a3 promotable:(BOOL)a4;

@end
