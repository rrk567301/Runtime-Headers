@class NSArray;

@interface AVB17221AEMControlDescriptorLinearSet : AVB17221AEMControlDescriptorValue

@property (copy) NSArray *values;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1 valueType:(unsigned short)a2;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)typeSize;
- (id)objectsForSetCommandValuesData:(id)a0;
- (unsigned long long)currentValueSize;
- (void)setCurrentValueData:(id)a0;
- (id)currentValueData;
- (BOOL)validControlValueType:(unsigned short)a0;
- (id)valuesDataWithNewNumberValue:(id)a0 atValueIndex:(unsigned short)a1;

@end
