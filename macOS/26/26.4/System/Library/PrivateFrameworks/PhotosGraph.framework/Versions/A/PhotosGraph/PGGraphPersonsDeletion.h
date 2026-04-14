@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
