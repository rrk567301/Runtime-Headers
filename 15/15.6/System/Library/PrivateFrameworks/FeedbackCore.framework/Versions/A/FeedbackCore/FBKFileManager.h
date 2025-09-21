@class NSURL;

@interface FBKFileManager : NSObject

@property (class, nonatomic, copy) NSURL *cachedTemporaryDirectory;

+ (id)containerURL;
+ (id)applicationSupportDirectory;
+ (id)libraryDirectory;
+ (id)draftsDirectory;
+ (void)deleteAllDraftDirectories;
+ (id)draftDirectoryForFilerForm:(id)a0;
+ (id)draftDirectoryForFilerForm:(id)a0 isTemporary:(char)a1;
+ (id)draftDirectoryForFilerType:(long long)a0;
+ (id)draftDirectoryForFilerType:(long long)a0 isTemporary:(char)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(char)a1;
+ (id)getUniqueDestinationURLForURL:(id)a0 alwaysIndex:(char)a1 forSourceURL:(id)a2;
+ (char)humansCanReadFile:(id)a0;
+ (char)isDirectory:(id)a0;
+ (id)temporaryDirectoryWithPathComponents:(id)a0;
+ (id)temporaryDraftDirectoryForFilerForm:(id)a0;

@end
