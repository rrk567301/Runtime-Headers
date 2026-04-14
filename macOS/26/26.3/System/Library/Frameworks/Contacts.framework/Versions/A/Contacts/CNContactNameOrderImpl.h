@interface CNContactNameOrderImpl : NSObject

+ (id)givenNameFirstOrder;
+ (id)defaultSortOrder;
+ (id)familyNameFirstOrder;
+ (id)defaultOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultNewContactOrder;

- (id)phoneticNameProperties;
- (id)sortingNameProperties;
- (long long)nameOrder;
- (id)nameProperties;

@end
