@class NSUUID, ISCustomRecipe, NSArray, NSData, NSString, NSMutableDictionary, NSDictionary, IFSymbol;
@protocol ISCompositorRecipe, ISCompositorResource;

@interface ISResourceProvider : NSObject <ISCompositorResourceProvider>

@property (readonly) char isDocumentBadge;
@property (readonly) char isPrecomposed;
@property (readonly) ISCustomRecipe *customRecipe;
@property (retain) NSArray *sourceRecordIdentifiers;
@property (readonly) NSMutableDictionary *resourcesByResourceKey;
@property (retain) ISCustomRecipe *customRecipe;
@property unsigned long long platform;
@property unsigned long long options;
@property char resolved;
@property unsigned long long lsDatabaseSequenceNumber;
@property (retain) NSUUID *lsDatabaseUUID;
@property (retain) NSData *resourceToken;
@property (readonly) NSData *validationToken;
@property (retain) id<ISCompositorResource> iconResource;
@property (readonly) id<ISCompositorResource> templateIconResource;
@property (retain) NSDictionary *decorationResources;
@property (retain) id<ISCompositorResource> badgeResource;
@property char placeholder;
@property (readonly) IFSymbol *symbol;
@property (retain) id<ISCompositorRecipe> suggestedRecipe;
@property unsigned long long resourceType;
@property char allowNonDefaultAppearances;
@property char allowAlterationsToResourceArt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppIconResourceProvider;
+ (id)resourceProviderWithRecord:(id)a0 options:(unsigned long long)a1;
+ (id)resourceProviderWithTypeIdentifier:(id)a0 options:(unsigned long long)a1;
+ (id)resourceWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
+ (id)resourceWithRecord:(id)a0 options:(unsigned long long)a1;
+ (id)resourceWithTypeCode:(unsigned int)a0 options:(unsigned long long)a1;
+ (id)resourceWithTypeIdentifier:(id)a0 options:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)validationToken;
- (id)symbol;
- (id)resourceNamed:(id)a0;
- (id)initWithResources:(id)a0;
- (id)resourceForKey:(id)a0;
- (char)_findBackgroundResourceWithIconDictionary:(id)a0 bundle:(id)a1;
- (char)_findBadgeResourceWithIconDictionary:(id)a0 bundle:(id)a1 record:(id)a2;
- (char)_findCustomRecipeWithIconDictionary:(id)a0 bundle:(id)a1;
- (char)_findTextResourceWithIconDictionary:(id)a0;
- (char)_isAppleResource;
- (void)configureProviderFromDescriptor:(id)a0;
- (id)iconResource;
- (id)initWithResource:(id)a0 templateResource:(id)a1;
- (void)resolveIconResource;
- (void)setIconResource:(id)a0;
- (void)setPlatformWithBundle:(id)a0;

@end
