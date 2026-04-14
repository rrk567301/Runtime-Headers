@interface CNContactNameOrderImpl : NSObject

+ (id)defaultSortOrder;
+ (id)defaultOrder;
+ (id)defaultNewContactOrder;
+ (id)givenNameFirstOrder;
+ (id)familyNameFirstOrder;
+ (id)orderForSortOrder:(long long)a0;

- (long long)nameOrder;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end
