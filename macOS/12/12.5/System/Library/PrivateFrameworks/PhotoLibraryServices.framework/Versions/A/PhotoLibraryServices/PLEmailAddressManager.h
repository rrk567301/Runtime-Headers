@class PLLazyObject, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (void).cxx_destruct;
- (id)plistPath;
- (id)assetsdClient;
- (id)keyForEmailAddress:(id)a0;
- (id)emailAddressForKey:(id)a0;
- (void)_loadDictionariesIfNeeded;
- (id)initWithPathManager:(id)a0 lazyAssetsdClient:(id)a1;

@end
