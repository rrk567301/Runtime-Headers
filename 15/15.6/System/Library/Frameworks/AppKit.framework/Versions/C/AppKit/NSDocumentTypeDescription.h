@class NSArray, NSString;

@interface NSDocumentTypeDescription : NSObject {
    NSArray *_exportableTypeIdentifiersOrOldStyleNames;
    NSArray *_fileNameExtensionsAndHFSFileTypes;
    NSString *_className;
    int _role;
    NSString *_oldStyleName;
    NSString *_oldStyleAlias;
    id _identifierOrIdentifiers;
    NSString *_persistentStoreType;
    NSString *_userActivityType;
}

+ (void)_addUniqueNameOrNames:(id)a0 toNames:(id)a1;
+ (id)_noneOrQuotingOfText:(id)a0;
+ (char)_validateDeclarationString:(id)a0 forKey:(id)a1;
+ (char)_validateDeclarationStrings:(id)a0 forKey:(id)a1;
+ (id)aliasesByName;
+ (id)descriptionsWithDeclarations:(id)a0;
+ (id)namesByAlias;
+ (char)parsesLSItemContentTypes;

- (id)description;
- (void).cxx_destruct;
- (id)className;
- (id)_initWithDeclaration:(id)a0 cachedNamesByAlias:(id)a1;
- (id)appSpecificPresentableNameForName:(id)a0;
- (char)exactlyMatchesFileNameExtensionOrHFSFileType:(id)a0;
- (id)fileNameExtensionsAndHFSFileTypes;
- (id)firstName;
- (void)getReadableNotWritable:(char)a0 names:(id)a1;
- (char)isEditableByThisApp;
- (char)isIdentifiedByName:(id)a0;
- (char)isIdentifiedByUTIs;
- (char)isNativeName:(id)a0;
- (char)isViewableByThisApp;
- (char)matchesAnyFile;
- (id)persistentStoreType;
- (id)userActivityType;

@end
