@interface CNContactNameOrderImpl : NSObject

+ (id)givenNameFirstOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultOrder;
+ (id)defaultSortOrder;
+ (id)familyNameFirstOrder;
+ (id)defaultNewContactOrder;

- (id)phoneticNameProperties;
- (id)sortingNameProperties;
- (id)nameProperties;
- (long long)nameOrder;

@end
