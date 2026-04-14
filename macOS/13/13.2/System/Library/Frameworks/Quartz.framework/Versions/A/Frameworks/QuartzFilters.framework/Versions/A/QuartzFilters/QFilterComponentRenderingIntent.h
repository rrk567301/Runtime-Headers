@interface QFilterComponentRenderingIntent : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (BOOL)addCell;
- (id)keysForValuesToObserveForUndo;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (BOOL)canGrow;
- (id)growableItems;
- (id)createGrowableItem;
- (void)updateOptionsInfo;
- (void)resetOptionsInfo;
- (BOOL)addIntentTuple:(int)a0 data:(int)a1 intent:(int)a2;
- (BOOL)addIntentTuple:(id)a0;

@end
