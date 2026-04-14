@class TSgPTPTime;

@interface AVB17221AEMControlDescriptorGPTPValue : AVB17221AEMControlDescriptorValue {
    unsigned long long _seconds;
}

@property (nonatomic) unsigned long long seconds;
@property (nonatomic) unsigned int nanoseconds;
@property (copy, nonatomic) TSgPTPTime *gPTPTime;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)seconds;
- (void)setSeconds:(unsigned long long)a0;
- (id)gPTPTime;
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
- (void)setGPTPTime:(id)a0;

@end
