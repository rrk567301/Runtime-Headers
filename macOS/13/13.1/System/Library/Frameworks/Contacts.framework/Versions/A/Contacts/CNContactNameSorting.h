@interface CNContactNameSorting : NSObject

+ (id /* block */)defaultNameComparator;
+ (BOOL)shouldSortByGivenName;
+ (id /* block */)givenNameFirstComparator;
+ (id /* block */)familyNameFirstComparator;

@end
