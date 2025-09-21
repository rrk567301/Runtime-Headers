@class NSString, NSURL, MIMCMContainer;

@interface MIContainer : NSObject

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long diskUsage;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char isTransient;
@property (retain, nonatomic) NSURL *containerURL;
@property (nonatomic) char isStagedContainer;
@property (readonly, nonatomic) MIMCMContainer *rawContainer;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) char isNew;

+ (id)_allContainersForIdentifier:(id)a0 persona:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)_bundleContainerForIdentifier:(id)a0 forPersona:(id)a1 error:(id *)a2;
+ (id)allContainersForAllPersonasForIdentifier:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)allContainersForIdentifier:(id)a0 persona:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)containerWithIdentifier:(id)a0 forPersona:(id)a1 ofContentClass:(unsigned long long)a2 createIfNeeded:(char)a3 created:(char *)a4 error:(id *)a5;
+ (id)containersForIdentifier:(id)a0 groupContainerIdentifier:(id)a1 ofContentClass:(unsigned long long)a2 forPersona:(id)a3 fetchTransient:(char)a4 createIfNeeded:(char)a5 error:(id *)a6;
+ (id)containersWithClass:(unsigned long long)a0 error:(id *)a1;
+ (id)containersWithClass:(unsigned long long)a0 personaUniqueString:(id)a1 error:(id *)a2;
+ (id)groupContainerURLsForBundleIdentifier:(id)a0 forPersona:(id)a1 error:(id *)a2;
+ (char)removeContainers:(id)a0 waitForDeletion:(char)a1 error:(id *)a2;
+ (id)tempContainerWithIdentifier:(id)a0 forPersona:(id)a1 ofContentClass:(unsigned long long)a2 error:(id *)a3;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContainerURL:(id)a0;
- (id)initWithContainer:(id)a0 error:(id *)a1;
- (char)_deriveContainerStatusWithError:(id *)a0;
- (char)_doInitWithContainer:(id)a0 error:(id *)a1;
- (char)_isStagedUpdateContainer:(char *)a0 withError:(id *)a1;
- (char)_replaceExistingContainer:(id)a0 replacementReason:(unsigned long long)a1 waitForDeletion:(char)a2 error:(id *)a3;
- (char)_setContainer:(id)a0 error:(id *)a1;
- (char)clearStagedUpdateContainerStatusWithError:(id *)a0;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(char)a2 withError:(id *)a3;
- (char)makeContainerLiveWithError:(id *)a0;
- (char)markContainerAsStagedUpdateContainer:(id *)a0;
- (char)purgeContentWithError:(id *)a0;
- (char)recreateDefaultStructureWithError:(id *)a0;
- (char)regenerateDirectoryUUIDWithError:(id *)a0;
- (char)removeUnderlyingContainerWaitingForDeletion:(char)a0 error:(id *)a1;
- (char)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
