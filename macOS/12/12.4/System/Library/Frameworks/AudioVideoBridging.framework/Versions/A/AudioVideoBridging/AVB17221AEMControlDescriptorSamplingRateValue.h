@interface AVB17221AEMControlDescriptorSamplingRateValue : AVB17221AEMControlDescriptorValue

@property unsigned int samplingRate;
@property unsigned char pull;
@property unsigned int baseFrequency;

+ (id)keyPathsForValuesAffectingPull;
+ (id)keyPathsForValuesAffectingBaseFrequency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned char)pull;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned int)baseFrequency;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (BOOL)updateWithValueDictionary:(id)a0;
- (id)valueDictionary;
- (id)valueXMLElement;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (unsigned long long)currentValueSize;
- (void)setCurrentValueData:(id)a0;
- (id)currentValueData;
- (BOOL)validControlValueType:(unsigned short)a0;
- (void)setPull:(unsigned char)a0;
- (void)setBaseFrequency:(unsigned int)a0;

@end
