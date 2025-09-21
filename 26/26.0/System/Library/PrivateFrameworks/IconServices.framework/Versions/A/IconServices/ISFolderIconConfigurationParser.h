@class NSString;

@interface ISFolderIconConfigurationParser : ISIconConfigurationMarkupParser

@property (readonly) id tintColor;
@property (readonly) NSString *assetCatalogImageName;

- (id)initWithInfoDictionary:(id)a0;
- (id)initWithIconDictionary:(id)a0;

@end
