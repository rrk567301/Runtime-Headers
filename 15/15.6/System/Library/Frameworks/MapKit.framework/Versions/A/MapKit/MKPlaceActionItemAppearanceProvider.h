@protocol MKPlaceActionItemAppearanceDataProvider;

@interface MKPlaceActionItemAppearanceProvider : NSObject {
    unsigned long long _actionType;
    id<MKPlaceActionItemAppearanceDataProvider> _dataProvider;
    char _myPlacesEnabled;
}

- (void).cxx_destruct;
- (id)_compactTitle;
- (char)_isDestructiveForMenu;
- (char)_isDestructiveForTableCell;
- (id)_longTitle;
- (id)_menuSymbol;
- (id)_tableCellSymbol;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)a0;
- (id)bestTitleForDisplayStyle:(unsigned long long)a0;
- (id)initWithActionType:(unsigned long long)a0 dataProvider:(id)a1;
- (char)isDestructiveForDisplayStyle:(unsigned long long)a0;

@end
