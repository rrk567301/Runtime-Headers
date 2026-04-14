@class NSData;

@interface AVB17221AEMControlDescriptorVendorValue : AVB17221AEMControlDescriptorValue

@property unsigned long long vendorEUI64;
@property (copy) NSData *binaryBlob;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectsForSetCommandValuesData:(id)a0;
- (id)valueXMLElement;
- (id)valueDictionary;
- (id)currentValueData;
- (unsigned long long)currentValueSize;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)initWithValuePointer:(char **)a0;
- (unsigned short)numberOfValues;
- (void)setCurrentValueData:(id)a0;
- (char *)setValuesAtPointer:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)updateWithValueDictionary:(id)a0;
- (BOOL)updateWithValueXMLElement:(id)a0;
- (BOOL)validControlValueType:(unsigned short)a0;
- (unsigned long long)valuesSize;

@end
