@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_apperanceNameIdentifierStore;
    int _maxApperanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}

- (void)dealloc;
- (id)path;
- (id)initWithIdentifier:(id)a0;
- (id)appearances;
- (void)insertCGImage:(struct CGImage { } *)a0 withName:(id)a1 andDescription:(id)a2;
- (void)removeImageNamed:(id)a0 withDescription:(id)a1;
- (void)removeImagesNamed:(id)a0;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (long long)maximumRenditionKeyTokenCount;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)deploymentPlatformString;
- (long long)deploymentPlatform;
- (id)renditionInfoForIdentifier:(unsigned short)a0;
- (unsigned short)appearanceIdentifierForName:(id)a0;
- (id)nameForAppearanceIdentifier:(unsigned short)a0;
- (void)clearRenditionCache;
- (id)allImageNames;
- (id)themeStore;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0 cursorHotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0;
- (id)imagesWithName:(id)a0;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 usingKeySignature:(id)a1;
- (struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForAssetWithName:(id)a0 withDescription:(id)a1;
- (void)_addRenditionInfoForImageWithName:(id)a0 andKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)_removeRenditionInfoForImageWithName:(id)a0;
- (id)defaultAppearanceName;

@end
