@interface HDFitnessMachineCharacteristicUInt8Field : HDFitnessMachineCharacteristicField

@property (nonatomic) unsigned char value;

- (id)valueAsData;
- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;

@end
