@interface CNContactNameOrderImpl : NSObject

+ (id)defaultOrder;
+ (id)defaultSortOrder;
+ (id)givenNameFirstOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)familyNameFirstOrder;
+ (id)defaultNewContactOrder;

- (id)sortingNameProperties;
- (id)phoneticNameProperties;
- (long long)nameOrder;
- (id)nameProperties;

@end
