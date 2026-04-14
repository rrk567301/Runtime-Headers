@class NSArray, IMAPDownloadCache;
@protocol IMAPGetAttachmentsDownloadsOperationDelegate;

@interface IMAPGetAttachmentsDownloadsOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPGetAttachmentsDownloadsOperationDelegate> delegate;
@property (retain, nonatomic) IMAPDownloadCache *downloadCache;
@property (readonly, copy, nonatomic) NSArray *messages;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessages:(id)a0 dataSource:(id)a1 downloadCache:(id)a2 delegate:(id)a3;

@end
