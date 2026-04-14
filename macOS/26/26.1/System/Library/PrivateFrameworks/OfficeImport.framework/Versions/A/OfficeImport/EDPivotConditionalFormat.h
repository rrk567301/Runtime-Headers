@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setScope:(int)a0;
- (int)type;
- (int)scope;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)a0;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)pivotAreas;

@end
