@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)rowSpan;
- (BOOL)merge:(int)a0;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)setRowSpan:(int)a0;
- (id)textBody;
- (void)setTextBody:(id)a0;
- (int)spanAlongDir:(int)a0;
- (int)gridSpan;
- (void)setGridSpan:(int)a0;
- (BOOL)horzMerge;
- (void)setHorzMerge:(BOOL)a0;
- (BOOL)vertMerge;
- (void)setVertMerge:(BOOL)a0;
- (int)topRow;
- (void)setTopRow:(int)a0;
- (int)leftColumn;
- (void)setLeftColumn:(int)a0;

@end
