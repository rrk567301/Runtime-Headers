@class NSString, CUICatalog, NSArray;

@interface NSImageCatalogRepProvider : NSObject <NSImageRepProvider> {
    CUICatalog *_catalog;
    NSString *_imageName;
    NSArray *_allRepresentationsCache;
}

@property (readonly) CUICatalog *catalog;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) NSString *symbolName;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) BOOL _isIconAppearanceSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)recache;
- (id)allRepresentationsForImage:(id)a0;
- (BOOL)canConfigureForHints:(id)a0;

@end
