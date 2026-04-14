@class NSString, CUICatalog, _NSSimpleLRUCache;

@interface NSImageSymbolRepProvider : NSObject <NSImageRepProvider> {
    NSString *_symbolName;
    CUICatalog *_catalog;
    _NSSimpleLRUCache *_cachedReps;
    BOOL _createdWithCompatibilityImageName;
}

@property (readonly) CUICatalog *catalog;
@property (readonly) NSString *symbolName;
@property (readonly) BOOL symbolIsFromPrivateCatalog;
@property (readonly, getter=wasCreatedWithCompatibilityImageName) BOOL createdWithCompatibilityImageName;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)allRepresentationsForImage:(id)a0;
- (id)bestRepresentationForImage:(id)a0 hints:(id)a1;
- (BOOL)canConfigureForHints:(id)a0;
- (id)_initWithSymbolName:(id)a0 catalog:(id)a1 createdWithCompatibilityImageName:(BOOL)a2;
- (id)_bestRepresentationForImage:(id)a0 hints:(id)a1;

@end
