@interface CNLikenessSorter : NSObject

+ (id /* block */)standardSorting;
+ (id /* block */)currentLikenessesFirstComparator;
+ (id /* block */)creationDateNewestToOldestComparator;

@end
