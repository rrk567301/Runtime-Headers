@interface CNLikenessSorter : NSObject

+ (id /* block */)currentLikenessesFirstComparator;
+ (id /* block */)creationDateNewestToOldestComparator;
+ (id /* block */)standardSorting;
+ (id /* block */)personaLikenessesLastComparator;

@end
