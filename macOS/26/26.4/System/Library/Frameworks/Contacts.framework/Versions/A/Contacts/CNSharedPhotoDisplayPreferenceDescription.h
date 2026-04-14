@class NSString;

@interface CNSharedPhotoDisplayPreferenceDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (Class)valueClass;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)valueFromCoreDataContact:(id)a0;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)coreDataKey;
- (id)nilValue;
- (long long)coreDataBitMask;
- (id)coreDataBitMaskedValuesMap;
- (id)flagsWithFlags:(id)a0 displayPreference:(id)a1;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)sharedPhotoDisplayPreferenceFromFlags:(id)a0;

@end
