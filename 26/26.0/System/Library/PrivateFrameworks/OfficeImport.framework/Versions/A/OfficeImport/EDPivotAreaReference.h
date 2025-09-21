@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (void)setCount:(unsigned long long)a0;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (BOOL)selected;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)byPosition;
- (BOOL)relative;
- (void)setByPosition:(BOOL)a0;
- (void)setRelative:(BOOL)a0;

@end
