@class NSString, NSArray, NSDictionary, NSObject;

@interface NSScriptClassDescription : NSClassDescription {
    NSString *_suiteName;
    NSString *_objcClassName;
    unsigned int _appleEventCode;
    NSObject *_superclassNameOrDescription;
    NSArray *_attributeDescriptions;
    NSArray *_toOneRelationshipDescriptions;
    NSArray *_toManyRelationshipDescriptions;
    NSDictionary *_commandMethodSelectorsByName;
    id _moreVars;
}

@property (readonly, copy) NSString *suiteName;
@property (readonly, copy) NSString *className;
@property (readonly, copy) NSString *implementationClassName;
@property (readonly, retain) NSScriptClassDescription *superclassDescription;
@property (readonly) unsigned int appleEventCode;
@property (readonly, copy) NSString *defaultSubcontainerAttributeKey;

+ (id)classDescriptionForClass:(Class)a0;
+ (id)_sortedAETEPropertyDescriptions:(id)a0;
+ (id)_sortedAETEElementClassDescriptions:(id)a0;
+ (id)_propertyDescriptionsOfClass:(Class)a0 fromImplDeclarations:(id)a1 presoDeclarations:(id)a2 suiteName:(id)a3 className:(id)a4;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)_isHidden;
- (id)attributeKeys;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
- (id)inverseForRelationshipKey:(id)a0;
- (BOOL)_hasHiddenParts;
- (unsigned short)_appendObjectClassDeclarationsToAETEData:(id)a0 includingParts:(int)a1;
- (id)_presentableDescription;
- (id)_synonymDescriptions;
- (id)initWithSuiteName:(id)a0 className:(id)a1 dictionary:(id)a2;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)_methodNameForCommand:(id)a0;
- (BOOL)supportsCommand:(id)a0;
- (SEL)selectorForCommand:(id)a0;
- (id)typeForKey:(id)a0;
- (id)classDescriptionForKey:(id)a0;
- (unsigned int)appleEventCodeForKey:(id)a0;
- (id)keyWithAppleEventCode:(unsigned int)a0;
- (id)_propertyDescriptionsByKey;
- (BOOL)isLocationRequiredToCreateForKey:(id)a0;
- (BOOL)hasPropertyForKey:(id)a0;
- (BOOL)hasOrderedToManyRelationshipForKey:(id)a0;
- (BOOL)hasReadablePropertyForKey:(id)a0;
- (BOOL)hasWritablePropertyForKey:(id)a0;
- (void)_getKeys:(id)a0 forPropertyDescriptionKind:(int)a1;
- (id)_keysForPropertyDescriptionKind:(int)a0;
- (id)_commandMethodSelectorsByName;
- (BOOL)isReadOnlyKey:(id)a0;
- (id)_presentableNames;
- (id)_presentablePluralName;
- (id)_firstPresentableName;
- (id)_aetePropertyDescriptions;
- (id)_aeteElementClassDescriptions;
- (id)_initWithProperties:(const struct { id x0; id x1; unsigned int x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; BOOL x11; id x12; id x13; } *)a0 primitiveType:(id)a1;
- (id)_initWithProperties:(const struct { id x0; id x1; unsigned int x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; BOOL x11; id x12; id x13; } *)a0 defaultSubcontainerAttributeKey:(id)a1 inverseRelationshipKeys:(id)a2;
- (id)_initWithClassDescription:(id)a0 synonymDescription:(id)a1;
- (void)_reconcileToSuiteRegistry:(id)a0;
- (void)_reconcileToExtensionDescription:(id)a0 suiteRegistry:(id)a1;
- (BOOL)_isFromSDEF;
- (BOOL)_isSynonym;
- (id)_propertyDescriptionForAppleEventCode:(unsigned int)a0 checkSubclasses:(BOOL)a1 superclasses:(BOOL)a2;
- (id)_propertyDescriptionForPresentableName:(id)a0 checkSubclasses:(BOOL)a1 superclasses:(BOOL)a2;
- (id)_propertyDescriptionForAppleEventCode:(unsigned int)a0 checkSubclasses:(BOOL)a1;
- (id)_propertyDescriptionForKey:(id)a0 checkSubclasses:(BOOL)a1 superclasses:(BOOL)a2;
- (id)_propertyDescriptionForKey:(id)a0 checkSubclasses:(BOOL)a1;
- (id)_typeDescriptionForKey:(id)a0;
- (void)_forKey:(id)a0 getType:(id *)a1 andSuite:(id *)a2;
- (BOOL)_shouldByDefaultInsertAtBeginningOfRelationshipForKey:(id)a0;
- (id)_contentsTypeDescription;
- (id)_primitiveTypeDescription;
- (BOOL)_isToManyRelationshipOrderedForKey:(id)a0;
- (void)_addAccessGroups:(id)a0;
- (id)_initWithSuiteName:(id)a0 className:(id)a1 implDeclaration:(id)a2 presoDeclaration:(id)a3;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end
