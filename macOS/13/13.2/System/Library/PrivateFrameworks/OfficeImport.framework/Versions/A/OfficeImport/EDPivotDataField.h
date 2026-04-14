@class NSString;

@interface EDPivotDataField : NSObject {
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (id)name;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (unsigned long long)baseItem;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)a0;
- (long long)baseField;
- (void)setBaseField:(long long)a0;
- (void)setBaseItem:(unsigned long long)a0;
- (int)showDataAs;
- (void)setShowDataAs:(int)a0;

@end
