@interface QFilterComponentAssignProfile : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (BOOL)addCell;
- (id)keysForValuesToObserveForUndo;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)profileNamesForDataType:(int)a0 numToSkip:(long long *)a1;
- (BOOL)canGrow;
- (id)growableItems;
- (id)createGrowableItem;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;
- (void)resetOptionsInfo;
- (BOOL)addProfileTuple:(int)a0 data:(int)a1 profile:(long long)a2;
- (BOOL)addProfileTuple:(id)a0;

@end
