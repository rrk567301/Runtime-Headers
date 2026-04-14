@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (void)setPriority:(unsigned long long)a0;
- (unsigned long long)priority;
- (int)scope;
- (void)setScope:(int)a0;
- (id)pivotAreas;

@end
