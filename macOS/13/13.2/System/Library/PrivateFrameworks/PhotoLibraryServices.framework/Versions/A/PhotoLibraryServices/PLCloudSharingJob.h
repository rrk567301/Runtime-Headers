@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {
    NSString *_archiveFilename;
}

@property (readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
@property (nonatomic) BOOL shouldPrioritize;

+ (id)lowPriorityOperationQueue;
+ (id)highPriorityOperationQueue;
+ (id)recoveredEventsWithPathManager:(id)a0;
+ (void)deleteAllRecoveryEventsWithPathManager:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)a0;
- (void)runAndWaitForMessageToBeSent;

@end
