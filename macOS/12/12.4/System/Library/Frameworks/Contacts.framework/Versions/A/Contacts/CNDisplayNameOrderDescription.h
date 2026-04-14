@class NSString;

@interface CNDisplayNameOrderDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (Class)valueClass;
- (id)valueFromCoreDataContact:(id)a0;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)coreDataKey;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)nameOrderFromFlags:(id)a0;
- (id)flagsWithFlags:(id)a0 nameOrder:(id)a1;
- (id)nilValue;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)CNValueForContact:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (long long)coreDataBitMask;
- (id)coreDataBitMaskedValuesMap;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;

@end
