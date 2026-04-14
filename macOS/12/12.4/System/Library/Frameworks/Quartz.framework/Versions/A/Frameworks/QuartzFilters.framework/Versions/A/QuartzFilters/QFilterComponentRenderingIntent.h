@interface QFilterComponentRenderingIntent : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (BOOL)addCell;
- (BOOL)canGrow;
- (id)keysForValuesToObserveForUndo;
- (id)createGrowableItem;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)growableItems;
- (void)updateOptionsInfo;
- (void)resetOptionsInfo;
- (BOOL)addIntentTuple:(int)a0 data:(int)a1 intent:(int)a2;
- (BOOL)addIntentTuple:(id)a0;

@end
