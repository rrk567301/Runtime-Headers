@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (int)scope;
- (void)setPriority:(unsigned long long)a0;
- (void)setScope:(int)a0;
- (int)type;
- (unsigned long long)priority;
- (id)init;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)pivotAreas;

@end
