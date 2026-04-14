@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_securityScopedBookmarksByPathKey;
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)resolveSecurityScopedBookmark:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;
+ (id)sharedBookmarkManager;
+ (id)_securityScopedURLWithURL:(id)a0 sandboxExtension:(id)a1;

- (id)_activeURLForClientLibraryURL:(id)a0;
- (id)_resolveSecurityScopedBookmarkData:(id)a0 error:(id *)a1;
- (void)_removeSSBForPathKey:(id)a0;
- (void)removeInvalidSSBsExcept:(id)a0;
- (void)_saveToDefaults;
- (void)_refreshSecurityScopedBookmarks;
- (id)init;
- (id)_newSecurityScopedBookmarkDataForURL:(id)a0;
- (void)_storeSecurityScopedURL:(id)a0 pathKey:(id)a1;
- (id)URLFromClientLibraryURL:(id)a0 sandboxExtension:(id)a1 error:(id *)a2;
- (void)_storeBookmarkForURL:(id)a0;
- (void).cxx_destruct;
- (void)_loadFromDefaults;
- (void)dealloc;
- (void)removeSSBForLibraryURL:(id)a0;
- (id)allKnownLibraryURLs;
- (void)_removeActiveURLForPathKey:(id)a0;
- (id)sandboxExtensionsByPathForClient:(id)a0 pathManager:(id)a1 libraryAccessRole:(long long)a2;
- (id)newSandboxExtensionDataForClient:(struct { unsigned int x0[8]; })a0 path:(id)a1 writable:(BOOL)a2;
- (void)_importLithiumAccessRights;

@end
