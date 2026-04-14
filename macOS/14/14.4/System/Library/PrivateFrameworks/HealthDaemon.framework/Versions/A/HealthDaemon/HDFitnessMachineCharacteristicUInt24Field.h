@interface HDFitnessMachineCharacteristicUInt24Field : HDFitnessMachineCharacteristicField

@property (nonatomic) unsigned int value;

- (id)valueAsData;
- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;

@end
