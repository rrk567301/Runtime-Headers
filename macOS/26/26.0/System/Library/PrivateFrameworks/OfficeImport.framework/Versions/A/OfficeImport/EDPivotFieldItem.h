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

- (int)type;
- (id)init;
- (BOOL)expanded;
- (void)setType:(int)a0;
- (BOOL)hidden;
- (id)description;
- (void)setExpanded:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)a0;
- (BOOL)childItems;
- (BOOL)missed;
- (void)setMissed:(BOOL)a0;
- (BOOL)calculatedMember;
- (BOOL)detailsHidden;
- (void)setCalculatedMember:(BOOL)a0;
- (void)setChildItems:(BOOL)a0;
- (void)setDetailsHidden:(BOOL)a0;

@end
