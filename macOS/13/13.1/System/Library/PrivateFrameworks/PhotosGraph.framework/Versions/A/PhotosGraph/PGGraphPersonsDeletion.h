@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (id)description;
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
