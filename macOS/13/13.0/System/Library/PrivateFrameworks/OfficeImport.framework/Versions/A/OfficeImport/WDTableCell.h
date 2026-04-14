@class WDTableCellProperties, NSString, WDText, WDTableRow;

@interface WDTableCell : NSObject {
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
}

@property (readonly, weak) WDTableRow *row;

- (id)description;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (unsigned long long)index;
- (void)clearProperties;
- (id)text;
- (id)properties;
- (id)initWithRow:(id)a0 at:(unsigned long long)a1;
- (BOOL)useTrackedProperties;
- (void)setUseTrackedProperties:(BOOL)a0;
- (long long)compareIndex:(id)a0;

@end
