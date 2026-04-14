@class BMFileManager;

@interface BMBookmarkStorage : NSObject {
    BMFileManager *_fileManager;
}

+ (id)currentSession;
+ (id)basePath;
+ (id)currentSessionPath;
+ (id)sessionsPath;
+ (id)persistentPath;
+ (id)newFileManager;
+ (void)initializeBiomeDSLDirectoryForBootSession;

- (id)init;
- (void).cxx_destruct;
- (id)pathForSessionStorageWithIdentifier:(id)a0 client:(id)a1;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1 client:(id)a2;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0 client:(id)a1;

@end
