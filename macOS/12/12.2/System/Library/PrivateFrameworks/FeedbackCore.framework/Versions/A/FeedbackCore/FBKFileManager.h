@class NSURL;

@interface FBKFileManager : NSObject

@property (class, nonatomic, copy) NSURL *cachedTemporaryDirectory;

+ (id)containerURL;
+ (id)applicationSupportDirectory;
+ (id)draftDirectoryForFilerForm:(id)a0;
+ (id)temporaryDraftDirectoryForFilerForm:(id)a0;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1 forSourceURL:(id)a2;
+ (id)draftDirectoryForFilerType:(long long)a0;
+ (id)libraryDirectory;
+ (id)draftDirectoryForFilerType:(long long)a0 isTemporary:(BOOL)a1;
+ (id)draftDirectoryForFilerForm:(id)a0 isTemporary:(BOOL)a1;
+ (id)temporaryDirectoryWithPathComponents:(id)a0;
+ (id)draftsDirectory;
+ (void)deleteAllDraftDirectories;
+ (BOOL)isDirectory:(id)a0;
+ (BOOL)humansCanReadFile:(id)a0;

@end
