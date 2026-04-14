@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) NSArray *extensionSubItems;
@property (readonly, nonatomic) NSExtensionItem *extensionItem;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithObject:(id)a0 sourceAppBundleIdentifier:(id)a1;

- (id)name;
- (void).cxx_destruct;
- (id)itemProviders;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)cachesSupportedTypes;
- (void)coerceToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)a0;
- (id)extensionItemName;
- (BOOL)itemProvidersSupportType:(id)a0;
- (id)itemProviderItems;

@end
