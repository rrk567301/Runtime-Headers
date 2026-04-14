@interface EDPivotFieldItem : NSObject {
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (id)description;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (BOOL)hidden;
- (int)type;
- (void)setType:(int)a0;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)a0;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)a0;
- (BOOL)childItems;
- (BOOL)missed;
- (void)setMissed:(BOOL)a0;
- (void)setChildItems:(BOOL)a0;
- (BOOL)calculatedMember;
- (void)setCalculatedMember:(BOOL)a0;
- (BOOL)detailsHidden;
- (void)setDetailsHidden:(BOOL)a0;

@end
