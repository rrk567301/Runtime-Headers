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

- (BOOL)merge:(int)a0;
- (id)properties;
- (void)setProperties:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
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
