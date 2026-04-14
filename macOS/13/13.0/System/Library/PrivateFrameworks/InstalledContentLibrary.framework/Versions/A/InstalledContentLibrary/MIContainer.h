@class NSString, NSURL;

@interface MIContainer : NSObject

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long diskUsage;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *debugDescriptionForContainer;
@property (readonly, nonatomic) struct container_object_s { } *container;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) BOOL isTransient;
@property (readonly, nonatomic) NSString *personaUniqueString;

+ (BOOL)_deleteContainers:(struct container_object_s **)a0 count:(unsigned long long)a1 waitForDeletion:(BOOL)a2 error:(id *)a3;
+ (BOOL)removeContainers:(id)a0 waitForDeletion:(BOOL)a1 error:(id *)a2;
+ (id)_containersForIdentifier:(id)a0 groupContainerIdentifier:(id)a1 ofContentClass:(unsigned long long)a2 forPersona:(id)a3 error:(id *)a4;
+ (struct container_object_s { } *)_copyContainerForIdentifier:(id)a0 ofContentClass:(unsigned long long)a1 forPersona:(id)a2 transient:(BOOL)a3 create:(BOOL)a4 created:(BOOL *)a5 error:(id *)a6;
+ (id)groupContainerURLsForBundleIdentifier:(id)a0 persona:(id)a1 error:(id *)a2;
+ (struct container_object_s { } *)_copyContainerForSerializedReference:(id)a0 matchingWithOptions:(unsigned long long)a1 error:(id *)a2;
+ (id)tempContainerWithIdentifier:(id)a0 ofContentClass:(unsigned long long)a1 error:(id *)a2;
+ (id)containerWithIdentifier:(id)a0 ofContentClass:(unsigned long long)a1 createIfNeeded:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (id)containersWithClass:(unsigned long long)a0 error:(id *)a1;
+ (id)containersWithClass:(unsigned long long)a0 personaUniqueString:(id)a1 error:(id *)a2;
+ (id)_bundleContainerForIdentifier:(id)a0 error:(id *)a1;
+ (id)allContainersForIdentifier:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (id)initWithContainerURL:(id)a0;
- (BOOL)_doInitConsumingContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_deriveContainerStatusWithError:(id *)a0;
- (BOOL)_refreshContainerMetadataWithError:(id *)a0;
- (BOOL)_setContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (BOOL)removeUnderlyingContainerWaitingForDeletion:(BOOL)a0 error:(id *)a1;
- (BOOL)_replaceExistingContainer:(id)a0 replacementReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 error:(id *)a3;
- (BOOL)recreateDefaultStructureWithError:(id *)a0;
- (BOOL)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 withError:(id *)a3;
- (BOOL)makeContainerLiveWithError:(id *)a0;
- (BOOL)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (BOOL)regenerateDirectoryUUIDWithError:(id *)a0;
- (BOOL)purgeContentWithError:(id *)a0;
- (BOOL)captureStoreDataFromDirectory:(id)a0 doCopy:(BOOL)a1 failureIsFatal:(BOOL)a2 withError:(id *)a3;

@end
