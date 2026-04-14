@class NSString;

@interface CNExternalIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)URIContainsFilename:(id)a0;
+ (id)decomposeCollectionPathAndFilenameInURI:(id)a0;

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (id)init;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)coreDataPropertyKeysForPrefetching;

@end
