@class NSSet;

@interface PGGraphSocialGroupsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *socialGroupUUIDs;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithSocialGroupUUIDs:(id)a0;

@end
