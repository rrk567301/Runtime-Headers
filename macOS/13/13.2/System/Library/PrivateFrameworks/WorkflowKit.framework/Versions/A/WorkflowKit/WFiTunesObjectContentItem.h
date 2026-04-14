@class NSString, WFiTunesObject;

@interface WFiTunesObjectContentItem : WFContentItem <WFURLCoercion>

@property (readonly, nonatomic) WFiTunesObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)urlItem_sharingItemClassesByBundleIdentifier;
+ (id)urlItem_outputClasses;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)a0 fromURL:(id)a1 forClass:(Class)a2;
+ (BOOL)urlItem_canCoerceFromURL:(id)a0;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;
+ (BOOL)parseiTunesURL:(id)a0 itemIdentifier:(id *)a1 countryCode:(id *)a2;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)a0 fromiTunesURL:(id)a1 forClass:(Class)a2;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)preferredFileType;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)possibleArtworkURLs;
- (void)getArtworkDataWithURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)getArtworkForSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)getPreferredArtworkURL:(id /* block */)a0;

@end
