@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;
@property (readonly, nonatomic) NSSet *moments;

- (id)description;
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithMoments:(id)a0;
- (id)initWithMomentUUIDs:(id)a0;

@end
