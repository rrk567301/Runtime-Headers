@protocol MKPlaceActionItemAppearanceDataProvider;

@interface MKPlaceActionItemAppearanceProvider : NSObject {
    unsigned long long _actionType;
    id<MKPlaceActionItemAppearanceDataProvider> _dataProvider;
}

- (void).cxx_destruct;
- (id)initWithActionType:(unsigned long long)a0 dataProvider:(id)a1;
- (id)bestTitleForDisplayStyle:(unsigned long long)a0;
- (id)_longTitle;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)a0;
- (id)_tableCellSymbol;
- (id)_menuSymbol;
- (id)_compactTitle;
- (BOOL)isDestructiveForDisplayStyle:(unsigned long long)a0;
- (BOOL)_isDestructiveForTableCell;
- (BOOL)_isDestructiveForMenu;

@end
