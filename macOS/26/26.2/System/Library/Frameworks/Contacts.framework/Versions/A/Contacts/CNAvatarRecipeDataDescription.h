@class NSString;

@interface CNAvatarRecipeDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (Class)valueClass;
- (id)posterDataChangeRequestsForValue:(id)a0 contactIdentifier:(id)a1;

@end
