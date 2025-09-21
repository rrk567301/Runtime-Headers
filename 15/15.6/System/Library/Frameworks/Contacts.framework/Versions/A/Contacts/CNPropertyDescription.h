@class NSString, NSArray, NSDictionary;

@interface CNPropertyDescription : NSObject <CNContactCoreDataProperty, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *coreDataKey;
@property (readonly, retain, nonatomic) NSArray *coreDataRelationshipKeyPathsForPrefetching;
@property (readonly, retain, nonatomic) NSArray *coreDataPropertyKeysForPrefetching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coreDataPredicateKeyPath;
@property (readonly, retain, nonatomic) NSDictionary *subCoreDataPredicatePropertiesByKey;
@property (readonly, nonatomic) long long coreDataBitMask;
@property (readonly, retain, nonatomic) NSDictionary *coreDataBitMaskedValuesMap;
@property (readonly, nonatomic) char isMultiValue;
@property (readonly, nonatomic) char isRelationship;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) SEL readSelector;
@property (readonly, nonatomic) SEL writeSelector;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) char isWritable;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) char isSingleValue;
@property (readonly, nonatomic) char isMultiValue;
@property (readonly, nonatomic) char isNonnull;
@property (readonly, copy, nonatomic) id /* block */ valueForKeyTransform;
@property (readonly, nonatomic) id nilValue;
@property (readonly, nonatomic) NSArray *equivalentLabelSets;

+ (id)os_log;
+ (void)computeDiffFromContact:(id)a0 toContact:(id)a1 andApplyToCoreDataContact:(id)a2;
+ (id)propertyDescriptionLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)valueFromCoreDataContact:(id)a0;
- (id)CNValueForContact:(id)a0;
- (void)assertValueType:(id)a0;
- (char)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataOwnedEntityKey;
- (id)coreDataOwnedEntityName;
- (id)initWithKey:(id)a0 readSelector:(SEL)a1 writeSelector:(SEL)a2;
- (char)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (char)isValidValue:(id)a0 error:(id *)a1;
- (char)isValue:(id)a0 equalToEmptyEquivalentOrValue:(id)a1;
- (char)isValue:(id)a0 preferredToUnifiedValue:(id)a1;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)stringForIndexingForContact:(id)a0;
- (id)unifiableLabelsForLabel:(id)a0;
- (id)valueWithResetIdentifiers:(id)a0;

@end
