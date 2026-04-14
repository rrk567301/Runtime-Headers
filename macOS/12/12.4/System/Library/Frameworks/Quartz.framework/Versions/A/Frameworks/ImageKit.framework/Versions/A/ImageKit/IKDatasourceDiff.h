@interface IKDatasourceDiff : NSObject

+ (id)diffItemsArray:(id)a0 withDataSource:(id)a1;
+ (void)applyDiff:(id)a0 toOldArray:(id)a1 withDataSource:(id)a2 allocator:(id)a3 allocatorSelector:(SEL)a4;
+ (BOOL)indexItemsArray:(id)a0;
+ (struct __CFDictionary { } *)_buildUIDtoIndexCache:(id)a0;
+ (unsigned long long)indexOfItemContainingDataSource:(id)a0 inArray:(id)a1 arrayIsIndexed:(BOOL)a2 newIndexIs:(int)a3 uidToIndexCache:(struct __CFDictionary { } *)a4;
+ (BOOL)indexDataSourceArray:(id)a0;

@end
