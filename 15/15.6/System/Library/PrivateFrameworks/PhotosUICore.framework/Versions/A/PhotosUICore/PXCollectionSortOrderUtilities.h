@interface PXCollectionSortOrderUtilities : NSObject

+ (long long)_sortOrderFromCollection:(id)a0 sortKey:(unsigned int)a1;
+ (long long)sortOrderFromCollection:(id)a0 isAscending:(out char *)a1;
+ (char)supportsFetchSortOrder:(long long)a0 inCollection:(id)a1;
+ (char)userCanChangeSortOrderInCollection:(id)a0;

@end
