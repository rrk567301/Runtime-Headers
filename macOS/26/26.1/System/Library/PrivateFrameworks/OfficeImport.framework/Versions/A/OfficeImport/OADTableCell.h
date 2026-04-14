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

- (id)properties;
- (BOOL)merge:(int)a0;
- (void)setProperties:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (int)rowSpan;
- (void)setRowSpan:(int)a0;
- (int)gridSpan;
- (BOOL)horzMerge;
- (int)leftColumn;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(BOOL)a0;
- (void)setLeftColumn:(int)a0;
- (void)setTextBody:(id)a0;
- (void)setTopRow:(int)a0;
- (void)setVertMerge:(BOOL)a0;
- (int)spanAlongDir:(int)a0;
- (id)textBody;
- (int)topRow;
- (BOOL)vertMerge;

@end
