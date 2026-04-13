@interface ABCNContactNameSorting : NSObject

+ (id /* block */)defaultNameComparator;
+ (BOOL)shouldSortByFirstName;
+ (id /* block */)firstNameFirstComparator;
+ (id /* block */)lastNameFirstComparator;

@end
