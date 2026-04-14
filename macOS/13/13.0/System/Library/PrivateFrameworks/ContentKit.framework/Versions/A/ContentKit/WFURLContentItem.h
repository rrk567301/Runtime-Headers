@class NSString, NSDictionary, NSURL, WFFileType, WFObjectType;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)ownedTypes;
+ (id)ownedPasteboardTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)attributionSetContentOfURL:(id)a0;
+ (id)mutableURLCoercions;
+ (id)URLCoercions;
+ (void)registerURLCoercion:(Class)a0;
+ (void)rediscoverURLCoercionClassesIfNeeded;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;
- (id)outputTypes;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (void)getHeadersWithCompletionHandler:(id /* block */)a0;
- (void)getContentsOfURLWithHandler:(id /* block */)a0;
- (void)getContentsWithRequest:(id)a0 expectedByteCountHandler:(id /* block */)a1 writtenByteCountHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)getContentsWithRequest:(id)a0 cacheResult:(BOOL)a1 expectedByteCountHandler:(id /* block */)a2 writtenByteCountHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getPDFWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTitleWithAvailabilityBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)generateObjectRepresentationForPrintHandler:(id /* block */)a0 coercionOptions:(id)a1;

@end
