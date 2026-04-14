@class NSData;

@interface AVB17221AEMControlDescriptorValue : AVB17221AEMObject <NSCopying>

@property unsigned short controlValueType;
@property (readonly, nonatomic) unsigned long long valuesSize;
@property (readonly, nonatomic) unsigned short numberOfValues;
@property (readonly, nonatomic) unsigned long long currentValueSize;
@property (copy, nonatomic) NSData *currentValueData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)initWithValuePointer:(char **)a0 valueType:(unsigned short)a1;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (id)objectsForSetCommandValuesData:(id)a0;
- (BOOL)updateWithValueDictionary:(id)a0;
- (id)valueDictionary;
- (id)valueXMLElement;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (void)setCurrentValueData:(id)a0;
- (id)currentValueData;
- (BOOL)validControlValueType:(unsigned short)a0;
- (id)valuesDataWithNewNumberValue:(id)a0 atValueIndex:(unsigned short)a1;

@end
