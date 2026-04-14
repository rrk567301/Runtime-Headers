@class NSString, LSRecord;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) NSString *fileExtension;
@property (retain) NSString *templateType;
@property (readonly) LSRecord *record;

- (id)description;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (void).cxx_destruct;
- (BOOL)treatLikeSymbol;
- (void)_determineRecipe;
- (BOOL)_findTextResourceWithIconDictionary:(id)a0;
- (BOOL)_isApp;
- (BOOL)_isAppClip;
- (BOOL)_isAppLike;
- (BOOL)_isAppleResource;
- (BOOL)_isFolder;
- (BOOL)_shouldTreatLikeApp;
- (BOOL)_shouldTreatLikeFolder;
- (void)assignLayerResources;
- (void)configureProviderFromDescriptor:(id)a0;
- (id)iconResource;
- (BOOL)iconStackResourcesAllowed;
- (id)initWithRecord:(id)a0 fileExtension:(id)a1 options:(unsigned long long)a2;
- (id)initWithRecord:(id)a0 options:(unsigned long long)a1;
- (void)resolveResources;
- (void)setPlatformWithBundle:(id)a0;
- (BOOL)shouldUseFolderRecipe;
- (id)templateIconResource;

@end
