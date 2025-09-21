@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    char mHorzMerge;
    char mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)rowSpan;
- (char)merge:(int)a0;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)setRowSpan:(int)a0;
- (int)gridSpan;
- (char)horzMerge;
- (int)leftColumn;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(char)a0;
- (void)setLeftColumn:(int)a0;
- (void)setTextBody:(id)a0;
- (void)setTopRow:(int)a0;
- (void)setVertMerge:(char)a0;
- (int)spanAlongDir:(int)a0;
- (id)textBody;
- (int)topRow;
- (char)vertMerge;

@end
