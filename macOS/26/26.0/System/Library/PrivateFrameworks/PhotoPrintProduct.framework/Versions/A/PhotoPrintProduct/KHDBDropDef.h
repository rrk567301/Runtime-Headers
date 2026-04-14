@interface KHDBDropDef : NSObject {
    short _fieldCapcity;
    short _numberFields;
    int *_fieldTypes;
    unsigned long long *_dataOffsets;
}

@property (nonatomic) unsigned long long dropSize;
@property (nonatomic) unsigned long long modelIdIndex;

+ (unsigned long long)dataSizeForFieldType:(int)a0;

- (void)clear;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void)addFieldOfType:(int)a0;
- (unsigned long long)dataOffsetForIndex:(short)a0;
- (unsigned long long)dataSizeForIndex:(short)a0;
- (int)fieldTypeForIndex:(short)a0;

@end
