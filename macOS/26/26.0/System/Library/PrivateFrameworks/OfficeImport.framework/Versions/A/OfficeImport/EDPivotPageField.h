@class NSString;

@interface EDPivotPageField : NSObject {
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (void)setName:(id)a0;
- (id)init;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)cap;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (void)setCap:(id)a0;

@end
