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
- (BOOL)merge:(int)a0;
- (int)rowSpan;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)setRowSpan:(int)a0;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(BOOL)a0;
- (void)setVertMerge:(BOOL)a0;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (BOOL)horzMerge;
- (int)gridSpan;
- (BOOL)vertMerge;
- (int)spanAlongDir:(int)a0;
- (int)topRow;
- (void)setTopRow:(int)a0;
- (int)leftColumn;
- (void)setLeftColumn:(int)a0;

@end
