@class NSURL;

@interface FBKFileManager : NSObject

@property (class, nonatomic, copy) NSURL *cachedTemporaryDirectory;

+ (id)containerURL;
+ (id)applicationSupportDirectory;
+ (void)deleteAllDraftDirectories;
+ (id)libraryDirectory;
+ (id)draftsDirectory;
+ (id)draftDirectoryForFilerForm:(id)a0 isTemporary:(BOOL)a1;
+ (id)draftDirectoryForFilerForm:(id)a0;
+ (id)temporaryDraftDirectoryForFilerForm:(id)a0;
+ (id)draftDirectoryForFilerType:(long long)a0;
+ (id)draftDirectoryForFilerType:(long long)a0 isTemporary:(BOOL)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1 forSourceURL:(id)a2;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(BOOL)a1;
+ (BOOL)isDirectory:(id)a0;
+ (BOOL)humansCanReadFile:(id)a0;
+ (id)temporaryDirectoryWithPathComponents:(id)a0;

@end
