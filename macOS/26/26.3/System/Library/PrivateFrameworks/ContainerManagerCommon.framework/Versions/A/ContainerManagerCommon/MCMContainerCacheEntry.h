@class NSString, NSUUID, MCMFSNode, MCMContainerPath, NSNumber, MCMUserIdentityCache;
@protocol MCMFileManagerResolvesPaths, MCMContainerCacheEntry_Internal, MCMContainerCacheUpdatable;

@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheControlsXattrs, MCMContainerCacheEntry_macOS, MCMContainerCacheEntry_Internal, MCMContainerCacheEntry>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MCMFSNode *fsNode;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) MCMContainerPath *containerPath;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) id<MCMFileManagerResolvesPaths> fmForNode;
@property (weak, nonatomic) id<MCMContainerCacheUpdatable> cache;
@property (retain, nonatomic) id<MCMContainerCacheEntry_Internal> next;
@property (nonatomic) unsigned long long generation;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL corrupt;
@property (nonatomic) BOOL ignore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUUID:(id)a0 forURL:(id)a1;
+ (id)schemaVersionForFileHandle:(id)a0;
+ (id)identifierForURL:(id)a0;
+ (id)_fileHandleForURL:(id)a0 writeable:(BOOL)a1;
+ (void)setUUID:(id)a0 forFileHandle:(id)a1;
+ (void)clearAttributesForFileHandle:(id)a0;
+ (void)setSchemaVersion:(id)a0 forFileHandle:(id)a1;
+ (id)UUIDForFileHandle:(id)a0;
+ (void)setSchemaVersion:(id)a0 forURL:(id)a1;
+ (id)identifierForFileHandle:(id)a0;
+ (struct timespec { long long x0; long long x1; })birthtimeForURL:(id)a0;
+ (void)clearAttributesForURL:(id)a0;
+ (void)setBirthtime:(struct timespec { long long x0; long long x1; })a0 forFileHandle:(id)a1;
+ (void)setIdentifier:(id)a0 forURL:(id)a1;
+ (void)setIdentifier:(id)a0 forFileHandle:(id)a1;
+ (id)UUIDForURL:(id)a0;
+ (void)setBirthtime:(struct timespec { long long x0; long long x1; })a0 forURL:(id)a1;
+ (id)schemaVersionForURL:(id)a0;
+ (struct timespec { long long x0; long long x1; })birthtimeForFileHandle:(id)a0;

- (id)containerIdentity;
- (id)fullDescription;
- (BOOL)verifyWithError:(id *)a0;
- (id)metadataWithError:(id *)a0;
- (id)_findUserManagedAssetsDirectoryAtContainerRootURL:(id)a0;
- (id)initFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)initWithMetadata:(id)a0 userIdentityCache:(id)a1;
- (id)_identifierForContainerPath:(id)a0;
- (id)fsNodeWithError:(id *)a0;
- (void)setXattrsWithFileHandle:(id)a0;
- (BOOL)isEqualToContainerCacheEntry:(id)a0;
- (id)_metadataFromContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (struct timespec { long long x0; long long x1; })birthtimeWithError:(id *)a0;
- (id)metadataMinimal;
- (void).cxx_destruct;
- (id)_fabricateMetadataForContainerPath:(id)a0 identifier:(id)a1 uuid:(id)a2 schemaVersion:(id)a3 userIdentityCache:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setXattrs;
- (id)initFromDiskWithIdentifier:(id)a0 containerClassPath:(id)a1 userIdentityCache:(id)a2;
- (id)_readMetadataForIdentifier:(id)a0 containerPath:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 uuid:(id)a3 metadata:(id)a4 userIdentityCache:(id)a5;
- (id)_metadataFromContainerClassPath:(id)a0 containerPathIdentifier:(id)a1 userIdentity:(id)a2 userIdentityCache:(id)a3 containerClass:(unsigned long long)a4 identifier:(id)a5;

@end
