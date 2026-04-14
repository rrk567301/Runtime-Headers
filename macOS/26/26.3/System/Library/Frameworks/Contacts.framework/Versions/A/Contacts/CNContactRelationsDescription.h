@class CNContactRelationsDescriptionLabels, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) CNContactRelationsDescriptionLabels *cachedLabels;
@property (readonly, nonatomic) Class provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)coreDataOwnedEntityName;
- (id)init;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)coreDataKey;
- (void).cxx_destruct;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isNonnull;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)localizedStringForLabel:(id)a0;
- (void)_addLocalizedLabels:(id)a0 fromLanguagePlist:(id)a1 languageIdentifier:(id)a2 toDictionary:(id)a3 conflictInfo:(id)a4;
- (id)_builtInExtendedLabels;
- (id)_builtInStandardLabels;
- (id)cachedLabelsForPreferredLanguages:(id)a0;
- (id /* block */)fromPlistTransform;
- (id)initWithLocalizationProvider:(Class)a0;
- (Class)labeledValueClass;
- (id)labelsForPreferredLanguages:(id)a0;
- (id)managedLabels;
- (id /* block */)plistTransform;
- (id)standardLabels;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)subCoreDataPredicatePropertiesByKey;

@end
