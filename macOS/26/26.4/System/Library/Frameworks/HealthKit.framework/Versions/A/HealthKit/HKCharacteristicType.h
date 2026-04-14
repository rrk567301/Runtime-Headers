@interface HKCharacteristicType : HKObjectType

- (id)_relatedQuantityType;
- (id)_dateOfBirthType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0 date:(id)a1;
- (id)_canoncialUnit;
- (id)_relatedCategoryType;

@end
