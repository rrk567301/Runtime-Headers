@class TSgPTPTime;

@interface AVB17221AEMControlDescriptorGPTPValue : AVB17221AEMControlDescriptorValue {
    unsigned long long _seconds;
}

@property (nonatomic) unsigned long long seconds;
@property (nonatomic) unsigned int nanoseconds;
@property (copy, nonatomic) TSgPTPTime *gPTPTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)seconds;
- (void)setSeconds:(unsigned long long)a0;
- (id)gPTPTime;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueDictionary;
- (id)valueXMLElement;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (void)setGPTPTime:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end
