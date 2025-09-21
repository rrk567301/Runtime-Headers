@class NSString;

@interface NSInertPasteboard : NSPasteboard {
    NSString *_inertName;
}

+ (id)alloc;

- (id)name;
- (long long)changeCount;
- (id)initWithName:(id)a0;
- (char)_setExpirationDate:(id)a0;
- (id)pasteboardItems;
- (char)_attachSecurityScopeToURL:(id)a0 index:(unsigned long long)a1;
- (struct __CFPasteboard { } *)_cfPasteboard;
- (id)_combinedPasteboardDataForTypeIdentifier:(id)a0;
- (long long)_currentGeneration;
- (id)_dataWithoutConversionForTypeIdentifier:(id)a0 index:(unsigned long long)a1 securityScoped:(char)a2;
- (id)_dataWithoutConversionForTypeIdentifier:(id)a0 securityScoped:(char)a1;
- (void)_detectMetadataForTypes:(id)a0 atIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_detectPatternsForPatterns:(id)a0 atIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_detectValuesForPatterns:(id)a0 atIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)_setData:(id)a0 forType:(id)a1 index:(unsigned long long)a2 usesPboardTypes:(char)a3;
- (long long)_setOwner:(id)a0 forTypes:(id)a1 atIndex:(unsigned long long)a2 selector:(SEL)a3 usesPboardTypes:(char)a4;
- (void)_updateTypeCacheIfNeeded;
- (long long)clearContents;
- (long long)declareTypes:(id)a0 owner:(id)a1;
- (unsigned long long)indexOfPasteboardItem:(id)a0;
- (long long)prepareForNewContentsWithOptions:(unsigned long long)a0;
- (id)readObjectsForClasses:(id)a0 options:(id)a1;
- (char)writeObjects:(id)a0;

@end
