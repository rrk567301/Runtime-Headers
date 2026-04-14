@class NSArray, NSBundle, NSString, NSDictionary, NSObject;

@interface NSScriptSuiteDescription : NSObject {
    struct { NSBundle *bundle; unsigned int appleEventCode; NSArray *classDescriptions; NSArray *commandDescriptions; NSArray *typeDescriptions; NSString *presentableDescription; NSObject *presentableNameOrNames; BOOL isHidden; NSArray *accessGroupDescriptions; } _properties;
    NSString *_plistSuiteName;
    BOOL _usesUnnamedArguments;
    char _padding[3];
    NSArray *_unreconciledClassSynonymDescriptions;
    NSArray *_unreconciledClassExtensionDescriptions;
    NSDictionary *_cachedClassDescriptionsByName;
    NSDictionary *_cachedCommandDescriptionsByName;
}

+ (id)currentSuiteTerminology;
+ (unsigned int)currentSuiteAppleEventCode;
+ (id)_classDescriptionsFromPropertyListDeclarations:(id)a0 suiteName:(id)a1;
+ (id)_commandDescriptionsFromPropertyListDeclarations:(id)a0 suiteName:(id)a1;
+ (id)_typeDescriptionsFromEnumerationImplDeclarations:(id)a0 presoDeclarations:(id)a1 valueTypeDeclarations:(id)a2;
+ (id)_classSynonymDescriptionsFromImplDeclarations:(id)a0 presoDeclarations:(id)a1;
+ (id)sortedClassDescriptions:(id)a0;
+ (id)suiteDescriptionFromPropertyListDeclaration:(id)a0 bundle:(id)a1;

- (void)dealloc;
- (id)description;
- (id)name;
- (BOOL)isHidden;
- (unsigned int)appleEventCode;
- (id)presentableDescription;
- (id)presentableNames;
- (BOOL)usesUnnamedArguments;
- (id)classDescriptions;
- (id)commandDescriptions;
- (id)typeDescriptions;
- (unsigned short)appendSuiteDeclarationsToAETEData:(id)a0;
- (id)firstPresentableName;
- (id)initWithProperties:(const struct { id x0; unsigned int x1; id x2; id x3; id x4; id x5; id x6; BOOL x7; id x8; } *)a0 suiteName:(id)a1 usesUnnamedArguments:(BOOL)a2 classSynonymDescriptions:(id)a3;
- (id)initWithProperties:(const struct { id x0; unsigned int x1; id x2; id x3; id x4; id x5; id x6; BOOL x7; id x8; } *)a0 classExtensionDescriptions:(id)a1;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (void)reconcileSelfToSuiteRegistry:(id)a0;
- (void)reconcileSubdescriptionsToSuiteRegistry:(id)a0;
- (id)bundle;
- (id)classDescriptionsByName;
- (id)commandDescriptionsByName;
- (void)setClassDescription:(id)a0;
- (void)removeClassDescriptions:(id)a0;
- (void)setCommandDescription:(id)a0;
- (void)removeCommandDescriptions:(id)a0;

@end
