@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (void)setOffset:(id)a0;
- (void)setType:(int)a0;
- (BOOL)outline;
- (id)offset;
- (int)type;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setOutline:(BOOL)a0;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (id)references;
- (void)setGrandCol:(BOOL)a0;
- (void)setGrandRow:(BOOL)a0;

@end
