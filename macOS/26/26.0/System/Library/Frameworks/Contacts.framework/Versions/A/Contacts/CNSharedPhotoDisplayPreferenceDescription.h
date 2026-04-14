@class NSString;

@interface CNSharedPhotoDisplayPreferenceDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)valueFromCoreDataContact:(id)a0;
- (id)nilValue;
- (id)init;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (Class)valueClass;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (long long)coreDataBitMask;
- (id)coreDataBitMaskedValuesMap;
- (id)flagsWithFlags:(id)a0 displayPreference:(id)a1;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)sharedPhotoDisplayPreferenceFromFlags:(id)a0;

@end
