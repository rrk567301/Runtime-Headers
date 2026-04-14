@class NSArray, AVB17221AEMLocalizedStringReference;

@interface AVB17221AEMControlDescriptorSelectorStringValue : AVB17221AEMControlDescriptorValue

@property unsigned short unitType;
@property unsigned char unitMultiplier;
@property unsigned char unitCode;
@property (copy) NSArray *options;
@property (retain) AVB17221AEMLocalizedStringReference *currentValue;
@property (retain) AVB17221AEMLocalizedStringReference *defaultValue;

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
- (char *)getUInt16ValuesAtPointer:(char *)a0 numberOfValues:(unsigned short)a1;
- (char *)setUInt16ValuesAtPointer:(char *)a0;
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

@end
