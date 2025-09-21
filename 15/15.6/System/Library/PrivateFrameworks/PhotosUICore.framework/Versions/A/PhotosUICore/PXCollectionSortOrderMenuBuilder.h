@interface PXCollectionSortOrderMenuBuilder : NSObject

+ (void)_enumeratePossibleSortOrdersUsingBlock:(id /* block */)a0;
+ (id)_localizedTitleForSortOrder:(long long)a0;
+ (unsigned int)_sortKeyFromSortOrder:(long long)a0;
+ (char)_supportsAscendingDescending:(unsigned int)a0;
+ (void)_updateSortOrderWithSortKey:(unsigned int)a0 ascending:(char)a1 forCollection:(id)a2;
+ (id)sortOrderMenuConfigurationsForCollection:(id)a0;

@end
