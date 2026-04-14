@class NSSet;

@interface PGGraphSocialGroupsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSocialGroupUUIDs:(id)a0;

@end
