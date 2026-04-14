@interface CNContactNameOrderImpl : NSObject

+ (id)familyNameFirstOrder;
+ (id)defaultSortOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)givenNameFirstOrder;
+ (id)defaultOrder;
+ (id)defaultNewContactOrder;

- (id)phoneticNameProperties;
- (id)sortingNameProperties;
- (long long)nameOrder;
- (id)nameProperties;

@end
