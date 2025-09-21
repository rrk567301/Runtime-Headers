@class PXIndexPathSet, NSNumber, NSObject;
@protocol OS_os_log, PXFastEnumeration;

@interface PXSectionedDataSource : NSObject <NSCopying> {
    NSNumber *_containsAnyItemsCache;
    NSNumber *_containsMultipleItemsCache;
    long long _totalNumberOfItemsCache;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _firstItemIndexPathCache;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _lastItemIndexPathCache;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *sectionedDataSourceLog;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) char containsAnyItems;
@property (readonly, nonatomic) char containsMultipleItems;
@property (readonly, nonatomic) long long totalNumberOfItems;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } firstSectionIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } lastSectionIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *allSectionIndexPaths;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } firstItemIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } lastItemIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *allItemIndexPaths;
@property (readonly, nonatomic) PXIndexPathSet *allIndexPaths;
@property (readonly, nonatomic) id<PXFastEnumeration> allItemsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allSectionsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allObjectsEnumerator;

+ (id)emptyDataSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 reverseDirection:(char)a1 usingBlock:(id /* block */)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)objectReferenceForObjectReference:(id)a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (char)couldObjectReferenceAppear:(id)a0;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 untilEndIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 usingBlock:(id /* block */)a2;
- (id)fetchAllItemObjects;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })firstNonEmptySectionAtOrBeforeSection:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathSetForObjectIDs:(id)a0;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)itemIndexPathsForSections:(id)a0;
- (id)itemsEnumeratorForIndexPaths:(id)a0;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectReferenceNearestToObjectReference:(id)a0;
- (void)prefetchIndexPaths:(id)a0;
- (void)prefetchSections:(id)a0;
- (id)objectsEnumeratorForIndexPaths:(id)a0;
- (long long)_numberOfAssetsWithMaximum:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })convertIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 fromSectionedDataSource:(id)a1;
- (id)convertIndexPathSet:(id)a0 fromSectionedDataSource:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 offset:(long long)a1;
- (id)objectIDsForIndexPathSet:(id)a0;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForSubItem;
- (id)sectionsEnumeratorForIndexPaths:(id)a0;

@end
