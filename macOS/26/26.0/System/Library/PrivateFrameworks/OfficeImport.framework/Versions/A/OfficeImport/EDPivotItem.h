@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (int)type;
- (id)init;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)itemIndexes;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;

@end
