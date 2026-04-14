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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)offset;
- (void)setOffset:(id)a0;
- (BOOL)outline;
- (void)setOutline:(BOOL)a0;
- (BOOL)grandRow;
- (void)setGrandRow:(BOOL)a0;
- (BOOL)grandCol;
- (void)setGrandCol:(BOOL)a0;
- (id)references;

@end
