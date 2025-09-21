@class WFCoercionOptions, NSArray, WFContentAttributionSet, NSMutableArray, NSLock;

@interface WFContentCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *extensionItems;
@property (readonly, nonatomic) NSArray *minimalExtensionItems;
@property (retain, nonatomic) NSMutableArray *mutableItems;
@property (retain, nonatomic) NSLock *itemWriteLock;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) WFCoercionOptions *defaultCoercionOptions;
@property (readonly, nonatomic) WFContentAttributionSet *attributionSet;

+ (id)collectionWithItems:(id)a0;
+ (void)_generateCollectionFromPasteboard:(id)a0 completionHandler:(id /* block */)a1;
+ (void)generateCollectionFromPasteboard:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getContentItemsForPasteboardItems:(id)a0 resultBlock:(id /* block */)a1;
+ (id)requiredResourcesForContentInPasteboard:(id)a0;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addItems:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addFile:(id)a0;
- (void)addFile:(id)a0 origin:(id)a1 disclosureLevel:(unsigned long long)a2;
- (id)initWithDefaultCoercionOptions:(id)a0;
- (void)getFileRepresentations:(id /* block */)a0 forType:(id)a1;
- (void)addFileWithOriginAttribution:(id)a0;
- (void)addObject:(id)a0 named:(id)a1;
- (BOOL)canPerformCoercion:(id)a0;
- (id)collectionByFilteringItemsWithBlock:(id /* block */)a0 excludedItems:(id *)a1;
- (id)collectionByFilteringToItemClass:(Class)a0 excludedItems:(id *)a1;
- (id)collectionByMergingAttributionSet:(id)a0;
- (void)convertToAppleEventDescriptorWithCompletionHandler:(id /* block */)a0;
- (void)copyToPasteboard:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)effectiveCoercionOptionsForRequest:(id)a0;
- (void)enumerateFileRepresentations:(id /* block */)a0 forType:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateObjectRepresentations:(id /* block */)a0 forClass:(Class)a1 completionHandler:(id /* block */)a2;
- (void)generateCollectionByCoercingToItemClass:(Class)a0 completionHandler:(id /* block */)a1;
- (void)generateCollectionByCoercingToItemClass:(Class)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateCollectionByCoercingToItemClasses:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateCollectionByCoercingToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateCollectionByEvaluatingQuery:(id)a0 forContentItemClass:(Class)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (void)getBoolRepresentation:(id /* block */)a0;
- (void)getFileRepresentation:(id /* block */)a0 forType:(id)a1;
- (void)getFileRepresentationAndAttributionSet:(id /* block */)a0 forType:(id)a1;
- (void)getFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)getListRepresentation;
- (void)getObjectRepresentation:(id /* block */)a0 forClass:(Class)a1;
- (void)getObjectRepresentationAndAttributionSet:(id /* block */)a0 forClass:(Class)a1;
- (void)getObjectRepresentations:(id /* block */)a0 forClass:(Class)a1;
- (void)getObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)getRichTextRepresentation:(id /* block */)a0;
- (void)getStringRepresentation:(id /* block */)a0;
- (void)getStringRepresentations:(id /* block */)a0;
- (id)initWithItems:(id)a0 defaultCoercionOptions:(id)a1;
- (BOOL)isCoercibleToItemClass:(Class)a0;
- (BOOL)isCoercibleToItemClasses:(id)a0;
- (void)performCoercion:(id)a0;
- (id)requiredResourcesForContent;
- (void)transformFileRepresentationsForType:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformFirstFileRepresentationForType:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformFirstObjectRepresentationForClass:(Class)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformItemsAndFlattenUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)transformItemsUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)transformObjectRepresentationsForClass:(Class)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
