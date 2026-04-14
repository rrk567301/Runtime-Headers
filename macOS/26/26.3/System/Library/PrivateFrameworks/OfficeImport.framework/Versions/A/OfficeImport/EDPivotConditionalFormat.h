@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setType:(int)a0;
- (int)type;
- (int)scope;
- (id)description;
- (void)setScope:(int)a0;
- (id)init;
- (void)setPriority:(unsigned long long)a0;
- (unsigned long long)priority;
- (void).cxx_destruct;
- (id)pivotAreas;

@end
