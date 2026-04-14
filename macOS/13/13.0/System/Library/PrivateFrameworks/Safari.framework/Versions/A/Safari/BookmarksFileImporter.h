@interface BookmarksFileImporter : NSObject

@property (readonly, nonatomic) BOOL canImportBookmarks;

+ (id)sharedImporter;

- (void)importBookmarks;
- (void)importBookmarksFromFilesAtURLs:(id)a0;
- (id)importBookmarksFrom:(id)a0;
- (int)importBookmarksFrom:(id)a0 intoBookmarksFolder:(id)a1;
- (id)_collectionNamed:(id)a0;
- (id)_dateForImportFolderName;
- (id)_uniqueImportFolderName;

@end
