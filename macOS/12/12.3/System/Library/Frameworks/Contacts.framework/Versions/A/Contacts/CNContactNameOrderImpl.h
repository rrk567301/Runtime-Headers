@interface CNContactNameOrderImpl : NSObject

+ (id)defaultSortOrder;
+ (id)defaultNewContactOrder;
+ (id)defaultOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;

- (long long)nameOrder;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end
