@interface QFilterComponentIntermediate : QFilterComponent

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
- (BOOL)addItermediateTuple:(int)a0 data:(int)a1 type:(int)a2 profile:(long long)a3 index0:(int)a4 index1:(int)a5 index2:(int)a6;
- (BOOL)addIntermediateTuple:(id)a0;

@end
