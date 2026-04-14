@class AVB17221AEMBodePlotEntry, NSArray;

@interface AVB17221AEMControlDescriptorBodePlotValue : AVB17221AEMControlDescriptorValue

@property (copy, nonatomic) AVB17221AEMBodePlotEntry *minValue;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *maxValue;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *step;
@property (copy, nonatomic) AVB17221AEMBodePlotEntry *defaultValue;
@property (copy, nonatomic) NSArray *currentValues;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)debugLogStringWithIndentation:(id)a0;
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
- (id)initWithValuePointer:(char **)a0 numberOfValues:(unsigned short)a1;

@end
