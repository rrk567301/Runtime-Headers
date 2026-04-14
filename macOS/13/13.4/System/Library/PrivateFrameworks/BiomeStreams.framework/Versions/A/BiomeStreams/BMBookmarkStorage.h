@class BMFileManager;

@interface BMBookmarkStorage : NSObject {
    BMFileManager *_fileManager;
}

+ (id)currentSession;
+ (id)basePath;
+ (id)currentSessionPath;
+ (void)initializeBiomeDSLDirectoryForBootSession;
+ (id)newFileManager;
+ (id)persistentPath;
+ (id)sessionsPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)pathForSessionStorageWithIdentifier:(id)a0 client:(id)a1;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1 client:(id)a2;

@end
