@class NSSet;

@interface PGGraphSocialGroupsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;
@property (readonly, nonatomic) NSSet *socialGroups;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSocialGroupUUIDs:(id)a0;
- (id)initWithSocialGroups:(id)a0;

@end
