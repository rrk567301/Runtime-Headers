@class NSURL;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSURL *URL;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)URLCoercions;
+ (id)attributionSetContentOfURL:(id)a0;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (id)mutableURLCoercions;
+ (void)registerURLCoercion:(Class)a0;

- (id)description;
- (void)getPreferredFileSize:(id /* block */)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;
- (id)outputTypes;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (id)additionalRepresentationsForSerialization;
- (BOOL)includesFileRepresentationInSerializedItem;
- (void)getContentsWithRequest:(id)a0 cacheResult:(BOOL)a1 expectedByteCountHandler:(id /* block */)a2 writtenByteCountHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getPDFWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentsOfURLWithHandler:(id /* block */)a0;
- (void)getHeadersWithCompletionHandler:(id /* block */)a0;
- (void)getContentsWithRequest:(id)a0 expectedByteCountHandler:(id /* block */)a1 writtenByteCountHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)getTitle:(id /* block */)a0;
- (void)generateObjectRepresentationForPrintHandler:(id /* block */)a0;

@end
