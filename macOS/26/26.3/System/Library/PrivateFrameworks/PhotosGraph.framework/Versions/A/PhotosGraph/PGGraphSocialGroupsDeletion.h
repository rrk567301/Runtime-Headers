@class NSSet;

@interface PGGraphSocialGroupsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSocialGroupUUIDs:(id)a0;

@end
