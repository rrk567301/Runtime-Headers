@interface QFilterComponentPDFX3Options : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;

- (id)keysForValuesToObserveForUndo;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (void)updateOptionsInfo;
- (void)resetOptionsInfo;
- (void)preloadPDFXOptions;

@end
