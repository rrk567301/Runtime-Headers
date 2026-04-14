@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithMomentUUIDs:(id)a0;

@end
