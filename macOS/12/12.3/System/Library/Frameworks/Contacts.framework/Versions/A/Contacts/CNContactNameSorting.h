@interface CNContactNameSorting : NSObject

+ (id /* block */)defaultNameComparator;
+ (BOOL)shouldSortByGivenName;
+ (id /* block */)familyNameFirstComparator;
+ (id /* block */)givenNameFirstComparator;

@end
