@interface ISIconFactory : ISIcon

+ (id)_iconForURL:(id)a0;
+ (id)_iconForURL:(id)a0 options:(unsigned long long)a1;
+ (id)_iconWithBinding:(struct _LSBinding { } *)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (id)_init;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithModelCode:(id)a0;
- (id)initWithType:(id)a0 iconConfiguration:(id)a1;
- (id)initWithTypeCode:(unsigned int)a0;
- (id)initWithMIMEType:(id)a0;
- (id)initWithType:(id)a0;
- (id)initWithBundleURL:(id)a0 type:(id)a1;
- (id)initWithFileExtension:(id)a0;
- (id)initWithResourceProxy:(id)a0;
- (id)initWithContentOfURL:(id)a0;
- (id)initWithIcns:(id)a0;
- (id)initWithSymbolName:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 imageLayers:(id)a1;
- (id)initWithBinding:(struct _LSBinding { } *)a0;
- (id)initWithIcnsData:(id)a0;
- (id)initWithApplicationIdentity:(id)a0;
- (id)initWithImages:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithBookmarkData:(id)a0;
- (id)initWithBundleURL:(id)a0 fileExtension:(id)a1;
- (id)initWithSymbolName:(id)a0 configuration:(id)a1;
- (id)initWithApplicationExtensionBundleIdentifier:(id)a0;
- (id)initWithTypeIdentifier:(id)a0 layerGroups:(id)a1;
- (id)initWithTypeIdentifier:(id)a0 iconLayers:(id)a1;

@end
