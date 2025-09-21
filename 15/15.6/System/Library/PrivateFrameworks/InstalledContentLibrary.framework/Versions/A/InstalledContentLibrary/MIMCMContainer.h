@class NSURL, NSString;

@interface MIMCMContainer : NSObject

@property (readonly, nonatomic) struct container_object_s { } *mcmContainer;
@property (nonatomic) char isTransient;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long diskUsage;
@property (readonly, nonatomic) char isNew;

+ (id)_allContainersForIdentifiers:(id)a0 groupIdentifiers:(id)a1 contentClass:(unsigned long long)a2 forPersona:(id)a3 transient:(char)a4 create:(char)a5 error:(id *)a6;
+ (id)_containerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 transient:(char)a3 create:(char)a4 error:(id *)a5;
+ (id)_enumeratorWithContainerClass:(unsigned long long)a0 forPersona:(id)a1 isTransient:(char)a2 identifiers:(id)a3 groupIdentifiers:(id)a4 create:(char)a5 usingBlock:(id /* block */)a6;
+ (id)containerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(char)a3 error:(id *)a4;
+ (id)containersForBundleIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(char)a3 fetchTransient:(char)a4 error:(id *)a5;
+ (id)containersForContentClass:(unsigned long long)a0 forPersona:(id)a1 fetchTransient:(char)a2 error:(id *)a3;
+ (id)containersForGroupIdentifier:(id)a0 forPersona:(id)a1 create:(char)a2 fetchTransient:(char)a3 error:(id *)a4;
+ (id)defaultDirectoriesForContainerType:(unsigned long long)a0 error:(id *)a1;
+ (char)deleteContainers:(id)a0 waitForDeletion:(char)a1 error:(id *)a2;
+ (id)enumerateContainersWithClass:(unsigned long long)a0 forPersona:(id)a1 isTransient:(char)a2 identifiers:(id)a3 groupIdentifiers:(id)a4 usingBlock:(id /* block */)a5;
+ (id)transientContainerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(char)a3 error:(id *)a4;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (char)replaceExistingContainer:(id)a0 error:(id *)a1;
- (char)_doInitWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (char)_refreshContainerMetadataWithError:(id *)a0;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (id)initWithSerializedContainer:(id)a0 matchingWithOptions:(unsigned long long)a1 error:(id *)a2;
- (char)purgeContentWithError:(id *)a0;
- (char)reclaimDiskSpaceWithError:(id *)a0;
- (char)recreateDefaultStructureWithError:(id *)a0;
- (char)regenerateDirectoryUUIDWithError:(id *)a0;
- (id)serializedContainerRepresentation;
- (char)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
