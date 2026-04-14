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
- (BOOL)outline;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (int)type;
- (id)init;
- (id)description;
- (id)offset;
- (void)setOutline:(BOOL)a0;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (id)references;
- (void)setGrandCol:(BOOL)a0;
- (void)setGrandRow:(BOOL)a0;

@end
