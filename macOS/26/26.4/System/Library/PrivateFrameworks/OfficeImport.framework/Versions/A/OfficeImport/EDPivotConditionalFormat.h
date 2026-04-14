@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setPriority:(unsigned long long)a0;
- (unsigned long long)priority;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (void)setScope:(int)a0;
- (int)type;
- (int)scope;
- (id)init;
- (id)description;
- (id)pivotAreas;

@end
