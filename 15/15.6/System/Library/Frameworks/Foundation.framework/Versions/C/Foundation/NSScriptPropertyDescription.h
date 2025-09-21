@class NSString, NSSet, NSObject, NSScriptSuiteDescription;

@interface NSScriptPropertyDescription : NSObject {
    NSString *_key;
    NSObject *_typeNameOrDescription;
    unsigned long long _access;
    char _isHidden;
    NSSet *_readAccessGroups;
    NSSet *_writeAccessGroups;
    NSScriptSuiteDescription *_typeSuiteDescription;
}

+ (id)propertyDescriptionFromKey:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2 suiteName:(id)a3 className:(id)a4;

- (void)dealloc;
- (id)description;
- (char)isHidden;
- (unsigned long long)access;
- (id)key;
- (id)typeDescription;
- (void)addAccessGroups:(id)a0;
- (void)addReadAccessGroup:(id)a0;
- (void)addWriteAccessGroup:(id)a0;
- (void)appendElementClassDeclarationToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)fullTypeName;
- (id)initWithKey:(id)a0 type:(id)a1 access:(unsigned long long)a2 isHidden:(char)a3 accessGroupDescriptions:(id)a4;
- (char)matchesAppleEventCode:(unsigned int)a0;
- (char)matchesPresentableName:(id)a0;
- (id)presentableRelationshipClassName;
- (id)readAccessGroups;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 className:(id)a2;
- (void)setTypeDescription:(id)a0 forReconcilingToSuiteRegistry:(id)a1;
- (id)writeAccessGroups;

@end
