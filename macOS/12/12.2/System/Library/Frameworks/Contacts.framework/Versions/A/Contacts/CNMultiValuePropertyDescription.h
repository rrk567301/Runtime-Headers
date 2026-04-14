@class NSString, NSArray, NSDictionary;

@interface CNMultiValuePropertyDescription : CNPropertyDescription <CNContactCoreDataMultiValueProperty>

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
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isRelationship;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) NSArray *managedLabels;
@property (readonly, nonatomic) Class labeledValueClass;
@property (readonly, nonatomic) id /* block */ plistTransform;
@property (readonly, nonatomic) id /* block */ fromPlistTransform;

@end
