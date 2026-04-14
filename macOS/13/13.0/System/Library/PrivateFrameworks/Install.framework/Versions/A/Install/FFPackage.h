@class NSLock, NSString, NSArray, NSData, IFArchive, IFCertificateIdentity, IFInstallPlan, IFUpgradeHints;

@interface FFPackage : PFModule {
    int _formatVersion;
    IFArchive *_archive;
    NSString *_subPath;
    long long _payloadOffset;
    BOOL _hasPayload;
    BOOL _hasScripts;
    BOOL _overwritePermissions;
    BOOL _hasPatch;
    NSString *_scriptTmpDir;
    NSArray *_preinstallScripts;
    NSArray *_postinstallScripts;
    IFInstallPlan *_installPlan;
    NSArray *_searchModules;
    IFUpgradeHints *_hints;
    NSArray *_dependencies;
    NSData *_bomBuffer;
    struct _BOMStorage { } *_bomStorage;
    struct _BOMBom { } *_bom;
    struct _BOMBomEnumerator { } *_bomEnum;
    NSLock *_fileEnumeratorLock;
    IFCertificateIdentity *_certificateIdentity;
}

+ (id)moduleName;
+ (id)packageFileTypes;

- (void)dealloc;
- (id)name;
- (id)description;
- (id)identifier;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)version;
- (id)groups;
- (void)skipDescendents;
- (id)dependencies;
- (id)title;
- (id)_archive;
- (int)capabilities;
- (id)information;
- (struct _BOMBom { } *)_bom;
- (BOOL)validateContents:(id *)a0;
- (id)certificateIdentity;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)installPlan;
- (id)searchDefinitions;
- (id)digestOfType:(id)a0;
- (id)taints;
- (BOOL)initFileEnumerator;
- (struct _BOMFSObject { } *)nextFile;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (void)resetFileEnumerator;
- (void)releaseFileData;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;
- (BOOL)hasAction:(id)a0;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)_pathForResource:(id)a0;
- (void)_closeArchiveFile;
- (BOOL)_findPayloadOffset:(long long *)a0;
- (BOOL)_extractScriptsToPath:(id)a0;
- (void)_releaseBOM;
- (BOOL)_readPackageInfoWithName:(id)a0;
- (BOOL)_retrieveGroupsFromElement:(id)a0 into:(id)a1;
- (BOOL)_retrieveTaintsFromElement:(id)a0 into:(id)a1;
- (BOOL)_retrievePayloadInfoFromElement:(id)a0 into:(id)a1;
- (BOOL)_retrieveScriptsInfoFromElement:(id)a0 into:(id)a1;
- (BOOL)_retrieveComponentsFromElement:(id)a0;
- (BOOL)_createHintsObjectFromElement:(id)a0;
- (BOOL)_loadLocationSearchesFromElement:(id)a0;
- (id)_stringForAttribute:(id)a0 inElement:(id)a1;
- (id)_numberForAttribute:(id)a0 inElement:(id)a1;
- (id)_elementsWithName:(id)a0 fromNode:(id)a1;
- (id)_firstElementWithName:(id)a0 fromNode:(id)a1;
- (id)_installPathForScriptDict:(id)a0 withContext:(id)a1;
- (id)_generateScriptForScripts:(id)a0 withContext:(id)a1;

@end
