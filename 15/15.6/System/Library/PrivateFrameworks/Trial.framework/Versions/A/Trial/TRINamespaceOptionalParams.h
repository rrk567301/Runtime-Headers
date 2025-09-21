@class TRIAppContainer, NSSet, NSString, NSURL;

@interface TRINamespaceOptionalParams : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *factorsURL;
@property (copy, nonatomic) TRIAppContainer *appContainer;
@property (copy, nonatomic) NSSet *upgradeNCVs;
@property (nonatomic) int cloudKitContainerId;
@property (copy, nonatomic) NSString *resourceAttributionIdentifier;
@property (nonatomic) char expensiveNetworkingAllowed;
@property (nonatomic) char enableFetchDuringSetupAssistant;
@property (nonatomic) int purgeabilityLevel;
@property (nonatomic) char availableToRootUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
