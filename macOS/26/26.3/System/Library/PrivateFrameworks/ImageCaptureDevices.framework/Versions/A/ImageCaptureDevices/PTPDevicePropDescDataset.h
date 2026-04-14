@class NSMutableData, NSMutableArray;

@interface PTPDevicePropDescDataset : NSObject {
    unsigned short _devicePropertyCode;
    unsigned short _dataTypeCode;
    unsigned char _readWriteAttribute;
    id _factoryDefaultValue;
    id _currentValue;
    unsigned char _formFlag;
    id _minimumValue;
    id _maximumValue;
    id _stepSize;
    unsigned short _numberOfValues;
    NSMutableArray *_supportedValues;
    NSMutableData *_content;
}

@property (retain, nonatomic) NSMutableData *content;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL readOnlyObject;
@property (retain, nonatomic) NSMutableArray *supportedValues;

- (id)minimumValue;
- (id)maximumValue;
- (void)setMaximumValue:(id)a0;
- (void)setMinimumValue:(id)a0;
- (void)updateContent;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (id)stepSize;
- (void)setStepSize:(id)a0;
- (id)initWithMutableData:(id)a0;
- (unsigned short)numberOfValues;
- (unsigned short)dataTypeCode;
- (void)setDataTypeCode:(unsigned short)a0;
- (unsigned short)devicePropertyCode;
- (id)factoryDefaultValue;
- (unsigned char)formFlag;
- (unsigned char)readWriteAttribute;
- (void)setDevicePropertyCode:(unsigned short)a0;
- (void)setFactoryDefaultValue:(id)a0;
- (void)setFormFlag:(unsigned char)a0;
- (void)setNumberOfValues:(unsigned short)a0;
- (void)setReadWriteAttribute:(unsigned char)a0;

@end
