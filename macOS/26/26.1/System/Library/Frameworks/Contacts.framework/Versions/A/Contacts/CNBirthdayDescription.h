@class NSString;

@interface CNBirthdayDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)coreDataPropertyKeysForPrefetching;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)init;
- (id /* block */)fromPlistTransform;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 preferredToUnifiedValue:(id)a1;

@end
