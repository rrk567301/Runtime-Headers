@class NSArray, NSNumber;

@interface AVB17221AEMControlDescriptorSelectorValue : AVB17221AEMControlDescriptorValue

@property unsigned short unitType;
@property unsigned char unitMultiplier;
@property unsigned char unitCode;
@property (copy) NSArray *options;
@property (retain) NSNumber *currentValue;
@property (retain) NSNumber *defaultValue;

+ (id)keyPathsForValuesAffectingUnitMultiplier;
+ (id)keyPathsForValuesAffectingUnitCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1 valueType:(unsigned short)a2;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (char *)getUInt8ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt32ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt32ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getInt64ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getUInt64ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getFloatValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)getDoubleValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)setInt8ValuesAtPointer:(char *)a0;
- (char *)setUInt8ValuesAtPointer:(char *)a0;
- (char *)setInt16ValuesAtPointer:(char *)a0;
- (char *)setUInt16ValuesAtPointer:(char *)a0;
- (char *)setInt32ValuesAtPointer:(char *)a0;
- (char *)setUInt32ValuesAtPointer:(char *)a0;
- (char *)setInt64ValuesAtPointer:(char *)a0;
- (char *)setUInt64ValuesAtPointer:(char *)a0;
- (char *)setFloatValuesAtPointer:(char *)a0;
- (char *)setDoubleValuesAtPointer:(char *)a0;
- (unsigned long long)typeSize;
- (id)objectsForSetCommandValuesData:(id)a0;
- (BOOL)updateWithValueDictionary:(id)a0;
- (id)valueDictionary;
- (id)valueXMLElement;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (unsigned long long)currentValueSize;
- (void)setCurrentValueData:(id)a0;
- (id)currentValueData;
- (void)setUnitMultiplier:(unsigned char)a0;
- (unsigned char)unitMultiplier;
- (void)setUnitCode:(unsigned char)a0;
- (unsigned char)unitCode;
- (BOOL)validControlValueType:(unsigned short)a0;
- (id)valuesDataWithNewNumberValue:(id)a0 atValueIndex:(unsigned short)a1;
- (char *)getInt8ValuesAtPointer:(char *)a0 numberOFValues:(unsigned short)a1;

@end
