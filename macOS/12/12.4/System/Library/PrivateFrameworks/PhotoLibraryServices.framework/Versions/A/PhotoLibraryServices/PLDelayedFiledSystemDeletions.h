@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {
    NSMutableArray *_deletionInfos;
}

+ (void)waitForAllDelayedDeletionsToFinish;
+ (id)filesystemDeletionQueue;
+ (void)appendDescriptionForEvent:(id)a0 toComponents:(id)a1;
+ (id)deletionsFromChangeHubEvent:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)addFilesystemDeletionInfo:(id)a0;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (void)appendToXPCMessage:(id)a0 managedObjectContext:(id)a1;
- (id)initWithFilesystemDeletionInfos:(id)a0;

@end
