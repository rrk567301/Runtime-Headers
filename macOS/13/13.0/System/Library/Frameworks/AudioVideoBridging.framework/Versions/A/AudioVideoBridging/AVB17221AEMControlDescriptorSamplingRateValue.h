@interface AVB17221AEMControlDescriptorSamplingRateValue : AVB17221AEMControlDescriptorValue

@property unsigned int samplingRate;
@property unsigned char pull;
@property unsigned int baseFrequency;

+ (id)keyPathsForValuesAffectingPull;
+ (id)keyPathsForValuesAffectingBaseFrequency;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)pull;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (BOOL)updateWithValueDictionary:(id)a0;
- (id)valueDictionary;
- (id)valueXMLElement;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)valuesSize;
- (unsigned short)numberOfValues;
- (unsigned long long)currentValueSize;
- (void)setCurrentValueData:(id)a0;
- (id)currentValueData;
- (id)objectsForSetCommandValuesData:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (void)setPull:(unsigned char)a0;
- (void)setBaseFrequency:(unsigned int)a0;
- (unsigned int)baseFrequency;

@end
