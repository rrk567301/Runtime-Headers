@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (void)setType:(int)a0;
- (int)type;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)itemIndexes;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;

@end
