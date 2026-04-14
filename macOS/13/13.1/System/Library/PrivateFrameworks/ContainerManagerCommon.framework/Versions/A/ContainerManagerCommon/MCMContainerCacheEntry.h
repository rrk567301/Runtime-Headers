@class NSString, NSUUID, MCMFSNode, MCMContainerPath, NSNumber, MCMUserIdentityCache;
@protocol MCMMetadata, MCMContainerCacheUpdatable;

@interface MCMContainerCacheEntry : NSObject <MCMContainerCacheEntry_macOS, MCMContainerCacheEntry_Internal, MCMContainerCacheEntry>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MCMFSNode *fsNode;
@property (retain, nonatomic) id<MCMMetadata> metadata;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) MCMContainerPath *containerPath;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (weak, nonatomic) id<MCMContainerCacheUpdatable> cache;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL corrupt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForURL:(id)a0;
+ (id)identifierForFD:(int)a0;
+ (id)schemaVersionForURL:(id)a0;
+ (id)schemaVersionForFD:(int)a0;
+ (id)UUIDForURL:(id)a0;
+ (id)UUIDForFD:(int)a0;
+ (void)setIdentifier:(id)a0 forURL:(id)a1;
+ (void)setIdentifier:(id)a0 forFD:(int)a1;
+ (void)setSchemaVersion:(id)a0 forURL:(id)a1;
+ (void)setSchemaVersion:(id)a0 forFD:(int)a1;
+ (void)setUUID:(id)a0 forURL:(id)a1;
+ (void)setUUID:(id)a0 forFD:(int)a1;
+ (void)clearAttributesForURL:(id)a0;
+ (void)clearAttributesForFD:(int)a0;
+ (id)_identifierWithGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (id)_UUIDForGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (id)_schemaVersionForGetter:(id /* block */)a0 pathForErrorLog:(id /* block */)a1;
+ (void)_setIdentifier:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;
+ (void)_setSchemaVersion:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;
+ (void)_setUUID:(id)a0 forSetter:(id /* block */)a1 pathForErrorLog:(id /* block */)a2;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fullDescription;
- (BOOL)verify;
- (id)metadataWithError:(id *)a0;
- (id)containerIdentity;
- (id)initWithIdentifier:(id)a0 containerPath:(id)a1 schemaVersion:(id)a2 uuid:(id)a3 metadata:(id)a4 userIdentityCache:(id)a5;
- (id)initWithMetadata:(id)a0 userIdentityCache:(id)a1;
- (id)metadataMinimal;
- (BOOL)isEqualToContainerCacheEntry:(id)a0;
- (id)_readMetadataForIdentifier:(id)a0 containerPath:(id)a1 error:(id *)a2;
- (id)initFromContainerPath:(id)a0 userIdentityCache:(id)a1;
- (id)initFromDiskWithIdentifier:(id)a0 containerClassPath:(id)a1 userIdentityCache:(id)a2;

@end
