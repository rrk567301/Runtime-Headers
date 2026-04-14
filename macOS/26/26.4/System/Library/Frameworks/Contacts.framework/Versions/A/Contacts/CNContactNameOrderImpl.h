@interface CNContactNameOrderImpl : NSObject

+ (id)defaultOrder;
+ (id)defaultSortOrder;
+ (id)defaultNewContactOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)givenNameFirstOrder;
+ (id)familyNameFirstOrder;

- (id)nameProperties;
- (long long)nameOrder;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end
