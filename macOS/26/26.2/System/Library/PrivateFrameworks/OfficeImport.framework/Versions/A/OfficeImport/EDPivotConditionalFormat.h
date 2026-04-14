@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setScope:(int)a0;
- (int)scope;
- (unsigned long long)priority;
- (void)setType:(int)a0;
- (void)setPriority:(unsigned long long)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)pivotAreas;

@end
