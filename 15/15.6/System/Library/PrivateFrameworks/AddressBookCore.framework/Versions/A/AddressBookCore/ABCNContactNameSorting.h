@interface ABCNContactNameSorting : NSObject

+ (id /* block */)defaultNameComparator;
+ (id /* block */)firstNameFirstComparator;
+ (id /* block */)lastNameFirstComparator;
+ (char)shouldSortByFirstName;

@end
