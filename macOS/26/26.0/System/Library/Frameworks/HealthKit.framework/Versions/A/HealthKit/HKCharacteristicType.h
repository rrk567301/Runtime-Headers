@interface HKCharacteristicType : HKObjectType

- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (id)_relatedCategoryType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0 date:(id)a1;
- (id)_dateOfBirthType;
- (id)initWithIdentifier:(id)a0;
- (id)_canoncialUnit;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;
- (id)_relatedQuantityType;

@end
