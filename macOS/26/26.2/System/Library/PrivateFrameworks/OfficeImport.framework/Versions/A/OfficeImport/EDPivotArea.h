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

- (void)setType:(int)a0;
- (void)setOffset:(id)a0;
- (BOOL)outline;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)offset;
- (void)setOutline:(BOOL)a0;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (id)references;
- (void)setGrandCol:(BOOL)a0;
- (void)setGrandRow:(BOOL)a0;

@end
