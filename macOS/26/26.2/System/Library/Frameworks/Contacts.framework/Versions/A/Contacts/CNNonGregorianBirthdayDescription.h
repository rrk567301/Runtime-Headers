@class NSString;

@interface CNNonGregorianBirthdayDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)valueFromCoreDataContact:(id)a0;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (Class)valueClass;
- (id /* block */)fromPlistTransform;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 preferredToUnifiedValue:(id)a1;

@end
