@interface QFilterComponentIntermediate : QFilterComponent

+ (char)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (char)addCell;
- (char)canGrow;
- (char)addIntermediateTuple:(id)a0;
- (char)addItermediateTuple:(int)a0 data:(int)a1 type:(int)a2 profile:(long long)a3 index0:(int)a4 index1:(int)a5 index2:(int)a6;
- (id)createGrowableItem;
- (id)growableItems;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (id)profileNamesForDataType:(int)a0 numToSkip:(long long *)a1;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;

@end
