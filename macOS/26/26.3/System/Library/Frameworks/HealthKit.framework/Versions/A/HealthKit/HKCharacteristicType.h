@interface HKCharacteristicType : HKObjectType

- (id)initWithIdentifier:(id)a0;
- (id)_relatedCategoryType;
- (id)_dateOfBirthType;
- (id)_canoncialUnit;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (id)_relatedQuantityType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0 date:(id)a1;

@end
