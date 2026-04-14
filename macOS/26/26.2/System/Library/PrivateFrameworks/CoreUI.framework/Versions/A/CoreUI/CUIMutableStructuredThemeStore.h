@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_appearanceNameIdentifierStore;
    int _maxAppearanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}

- (long long)maximumRenditionKeyTokenCount;
- (void)_removeRenditionInfoForImageWithName:(id)a0;
- (id)allImageNames;
- (void)clearRenditionCache;
- (id)renditionInfoForIdentifier:(unsigned short)a0;
- (void)_addRenditionInfoForImageWithName:(id)a0 andKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0;
- (id)deploymentPlatformString;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 usingKeySignature:(id)a1;
- (struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForAssetWithName:(id)a0 withDescription:(id)a1;
- (unsigned short)appearanceIdentifierForName:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)defaultAppearanceName;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)appearances;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (void)removeImageNamed:(id)a0 withDescription:(id)a1;
- (void)insertCGImage:(struct CGImage { } *)a0 withName:(id)a1 andDescription:(id)a2;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0 cursorHotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (id)path;
- (void)removeImagesNamed:(id)a0;
- (long long)deploymentPlatform;
- (id)themeStore;
- (id)imagesWithName:(id)a0;
- (id)nameForAppearanceIdentifier:(unsigned short)a0;
- (void)dealloc;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;

@end
