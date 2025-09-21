@class NSString;

@interface ABCNPostalAddressesDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)address:(id)a0 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)a1;
- (unsigned long long)indexOfUSState:(id)a0;
- (char)isStateValue:(id)a0 equivalentToValue:(id)a1;
- (char)address:(id)a0 winsTieBreakerAgainstAddress:(id)a1;
- (char)address:(id)a0 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)a1;
- (void)copyFromContact:(id)a0 to:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (char)isEqualForContact:(id)a0 other:(id)a1;
- (char)isPostalCodeValue:(id)a0 equivalentToValue:(id)a1;
- (char)isValue:(id)a0 equivalentToValue:(id)a1;
- (char)isValue:(id)a0 equivalentToValue:(id)a1 forKey:(id)a2;
- (char)isValue:(id)a0 preferredToEquivalentValue:(id)a1;
- (char)postalCodeIsMoreComplete:(id)a0;
- (unsigned long long)preferenceScoreForAddress:(id)a0;
- (unsigned long long)preferenceScoreForKey:(id)a0;

@end
