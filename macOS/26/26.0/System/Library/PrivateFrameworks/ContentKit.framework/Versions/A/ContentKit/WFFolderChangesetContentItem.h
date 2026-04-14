@class WFFolderChangeset;

@interface WFFolderChangesetContentItem : WFFolderContentItem

@property (readonly, nonatomic) WFFolderChangeset *folderChangeset;

+ (id)allProperties;
+ (id)countDescription;
+ (id)fileContentItemsFromURLs:(id)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;

- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)includesHiddenFiles;

@end
