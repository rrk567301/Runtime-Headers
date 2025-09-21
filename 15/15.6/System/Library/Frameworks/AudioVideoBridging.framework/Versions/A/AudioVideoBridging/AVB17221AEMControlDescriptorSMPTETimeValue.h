@interface AVB17221AEMControlDescriptorSMPTETimeValue : AVB17221AEMControlDescriptorValue

@property unsigned short hours;
@property unsigned char minutes;
@property unsigned char seconds;
@property unsigned char frames;
@property unsigned short subframes;
@property unsigned char framesPerSecond;
@property char dropFrame;
@property char pull;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)valueXMLElement;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (char)updateWithValueDictionary:(id)a0;
- (char)updateWithValueXMLElement:(id)a0;
- (char)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end
