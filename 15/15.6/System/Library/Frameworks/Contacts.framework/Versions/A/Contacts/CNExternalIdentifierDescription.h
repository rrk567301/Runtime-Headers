@class NSString;

@interface CNExternalIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)URIContainsFilename:(id)a0;
+ (id)decomposeCollectionPathAndFilenameInURI:(id)a0;

- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (char)isEqualForContact:(id)a0 other:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataPropertyKeysForPrefetching;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;

@end
