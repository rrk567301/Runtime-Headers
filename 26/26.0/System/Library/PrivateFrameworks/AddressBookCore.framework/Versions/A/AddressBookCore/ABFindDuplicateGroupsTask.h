@class NSProgress;
@protocol ABFindDuplicateGroupsTaskStrategyImpl;

@interface ABFindDuplicateGroupsTask : CNTask

@property (readonly) id<ABFindDuplicateGroupsTaskStrategyImpl> discoveryStrategyImpl;
@property (readonly) NSProgress *progress;

+ (id)makeImplForDiscoveryStrategy:(unsigned long long)a0 addressBook:(id)a1;

- (id)run:(id *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGroups:(id)a0;
- (id)initWithAddressBook:(id)a0 discoveryStrategy:(unsigned long long)a1;
- (id)initWithDiscoveryStrategyImpl:(id)a0;
- (id)partitionCollectionsByGroupName:(id)a0;
- (id)partitionGroupsByCollection:(id)a0;

@end
