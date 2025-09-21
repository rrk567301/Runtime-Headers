@class TRIAppContainer, NSString, NSSet, NSURL;

@interface TRINamespaceDescriptor : NSObject

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int downloadNCV;
@property (readonly, nonatomic) NSURL *factorsURL;
@property (readonly, nonatomic) TRIAppContainer *appContainer;
@property (readonly, nonatomic) NSSet *upgradeNCVs;
@property (readonly, nonatomic) int cloudKitContainerId;
@property (readonly, nonatomic) NSString *resourceAttributionIdentifier;
@property (readonly, nonatomic) char expensiveNetworkingAllowed;
@property (readonly, nonatomic) char enableFetchDuringSetupAssistant;
@property (readonly, nonatomic) int purgeabilityLevel;
@property (readonly, nonatomic) char availableToRootUser;

+ (id)loadFromFile:(id)a0;
+ (id)descriptorPathForNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)descriptorsForDirectory:(id)a0 filterBlock:(id /* block */)a1;
+ (void)enumerateDescriptorsInDirectory:(id)a0 block:(id /* block */)a1;
+ (id)loadWithNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (char)removeDescriptorWithNamespaceName:(id)a0 fromDirectory:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (char)writeToFile:(id)a0;
- (char)saveToDirectory:(id)a0;
- (char)_isEqualToNamespaceDescriptor:(id)a0;
- (char)_upgradeNCVsArePositiveIntegers:(id)a0;
- (char)_upgradeNCVsIsValid:(id)a0;
- (id)factorsAbsolutePathAsOwner:(char)a0;
- (id)initWithNamespaceName:(id)a0 downloadNCV:(unsigned int)a1 optionalParams:(id)a2;
- (char)removeFromDirectory:(id)a0;

@end
