@class IMAPDownloadCache, NSArray, IMAPTaskManager;
@protocol IMAPSyncAttachmentsOperationDelegate, IMAPMessageDataSource;

@interface IMAPSyncAttachmentsOperation : IMAPNetworkTaskOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly, weak, nonatomic) id<IMAPSyncAttachmentsOperationDelegate> delegate;
@property (retain, nonatomic) IMAPDownloadCache *downloadCache;
@property (readonly, copy, nonatomic) NSArray *downloads;

- (void)main;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)initWithDownloads:(id)a0 dataSource:(id)a1 taskManager:(id)a2 downloadCache:(id)a3 delegate:(id)a4;

@end
