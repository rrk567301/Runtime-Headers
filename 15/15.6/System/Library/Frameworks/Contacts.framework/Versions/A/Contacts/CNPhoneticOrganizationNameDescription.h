@class NSString;

@interface CNPhoneticOrganizationNameDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (char)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (char)isNonnull;
- (void)setCNValue:(id)a0 onContact:(id)a1;

@end
