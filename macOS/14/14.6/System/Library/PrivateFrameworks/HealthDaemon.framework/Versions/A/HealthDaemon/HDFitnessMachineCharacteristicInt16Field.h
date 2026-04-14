@interface HDFitnessMachineCharacteristicInt16Field : HDFitnessMachineCharacteristicField

@property (nonatomic) short value;

- (id)valueAsData;
- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;

@end
