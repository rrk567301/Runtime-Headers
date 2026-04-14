@class NSString;

@interface _NSDataSourceSnapshotter : NSObject <NSCopying, _NSDataSourceSnapshotTranslating> {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct { struct _NSRange *__cap_; } ; } _sectionRanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotterForSectionCountsProvider:(id /* block */)a0;
+ (id)snapshotterForSnapshot:(id)a0;
+ (id)snapshotterForDataSourceBackedView:(id)a0;

- (long long)numberOfItemsBeforeSection:(long long)a0;
- (long long)sectionForGlobalIndex:(long long)a0;
- (id)snapshot;
- (BOOL)_decrementSectionCount:(long long)a0 byCount:(long long)a1;
- (long long)numberOfSections;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSectionCounts:(id)a0;
- (id)initWithSectionCountsProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_deleteSection:(long long)a0;
- (BOOL)_incrementSectionCount:(long long)a0;
- (BOOL)indexPathIsSectionAppendingInsert:(id)a0;
- (id)indexPathForAppendingInsertInSection:(long long)a0;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (BOOL)_decrementSectionCount:(long long)a0;
- (BOOL)_incrementSectionCount:(long long)a0 byCount:(long long)a1;
- (long long)globalIndexForIndexPath:(id)a0;
- (BOOL)_insertSection:(long long)a0 withInitialCount:(long long)a1;
- (BOOL)_deleteAllSections;
- (void)_recomputeRangeLocations;
- (id)initWithDataSourceBackedView:(id)a0;

@end
