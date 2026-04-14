@class NSString;

@interface CNAvatarRecipeDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (id)init;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)posterDataChangeRequestsForValue:(id)a0 contactIdentifier:(id)a1;

@end
