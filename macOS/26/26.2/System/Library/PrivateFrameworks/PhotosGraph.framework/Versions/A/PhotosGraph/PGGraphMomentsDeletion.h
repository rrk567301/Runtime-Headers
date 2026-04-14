@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMomentUUIDs:(id)a0;

@end
