@class NSString, NSArray;

@interface NSDocumentTypeDescription : NSObject {
    NSString *_className;
    int _role;
    NSString *_oldStyleName;
    NSString *_oldStyleAlias;
    id _identifierOrIdentifiers;
    NSArray *_exportableTypeIdentifiersOrOldStyleNames;
    NSArray *_fileNameExtensionsAndHFSFileTypes;
    NSString *_persistentStoreType;
    NSString *_userActivityType;
}

+ (id)namesByAlias;
+ (id)aliasesByName;
+ (BOOL)parsesLSItemContentTypes;
+ (BOOL)_validateDeclarationString:(id)a0 forKey:(id)a1;
+ (BOOL)_validateDeclarationStrings:(id)a0 forKey:(id)a1;
+ (id)descriptionsWithDeclarations:(id)a0;
+ (void)_addUniqueNameOrNames:(id)a0 toNames:(id)a1;
+ (id)_noneOrQuotingOfText:(id)a0;

- (void)dealloc;
- (id)description;
- (id)className;
- (id)_initWithDeclaration:(id)a0 cachedNamesByAlias:(id)a1;
- (BOOL)isIdentifiedByUTIs;
- (BOOL)isEditableByThisApp;
- (BOOL)isViewableByThisApp;
- (id)firstName;
- (BOOL)isIdentifiedByName:(id)a0;
- (id)appSpecificPresentableNameForName:(id)a0;
- (BOOL)exactlyMatchesFileNameExtensionOrHFSFileType:(id)a0;
- (BOOL)matchesAnyFile;
- (id)fileNameExtensionsAndHFSFileTypes;
- (void)getReadableNotWritable:(BOOL)a0 names:(id)a1;
- (BOOL)isNativeName:(id)a0;
- (id)persistentStoreType;
- (id)userActivityType;

@end
