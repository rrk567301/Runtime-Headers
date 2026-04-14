@class NSString, NSSet;

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSSet *propertyNames;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithPersonLocalIdentifier:(id)a0 contactIdentifier:(id)a1 propertyNames:(id)a2;
- (id)initWithPersonLocalIdentifier:(id)a0 propertyNames:(id)a1;
- (void)mergeChange:(id)a0;

@end
