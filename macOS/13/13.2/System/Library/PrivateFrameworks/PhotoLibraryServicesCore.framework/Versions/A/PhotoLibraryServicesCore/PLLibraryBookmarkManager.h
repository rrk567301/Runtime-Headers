@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_securityScopedBookmarksByPathKey;
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)sharedBookmarkManager;
+ (id)resolveSecurityScopedBookmark:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;
+ (id)_securityScopedURLWithURL:(id)a0 sandboxExtension:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_saveToDefaults;
- (id)newSandboxExtensionDataForClient:(struct { unsigned int x0[8]; })a0 path:(id)a1 writable:(BOOL)a2;
- (id)sandboxExtensionsByPathForClient:(id)a0 pathManager:(id)a1;
- (void)removeSSBForLibraryURL:(id)a0;
- (id)URLFromClientLibraryURL:(id)a0 sandboxExtension:(id)a1 error:(id *)a2;
- (void)removeInvalidSSBsExcept:(id)a0;
- (id)allKnownLibraryURLs;
- (void)_importLithiumAccessRights;
- (void)_storeBookmarkForURL:(id)a0;
- (void)_loadFromDefaults;
- (void)_refreshSecurityScopedBookmarks;
- (id)_activeURLForClientLibraryURL:(id)a0;
- (id)_newSecurityScopedBookmarkDataForURL:(id)a0;
- (id)_resolveSecurityScopedBookmarkData:(id)a0 error:(id *)a1;
- (void)_storeSecurityScopedURL:(id)a0 pathKey:(id)a1;
- (void)_removeActiveURLForPathKey:(id)a0;
- (void)_removeSSBForPathKey:(id)a0;

@end
