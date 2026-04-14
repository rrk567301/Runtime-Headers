@class NSManagedObjectContext, ICNAHistogramManager;
@protocol ICLegacyContext;

@interface ICNASnapshotReporter : ICNAEventReporter

@property (retain, nonatomic) ICNAHistogramManager *accountHistogramManager;
@property BOOL isPerformingSnapshot;
@property (retain, nonatomic) id<ICLegacyContext> htmlContext;
@property (retain, nonatomic) NSManagedObjectContext *modernContext;
@property long long contextHolderCount;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (BOOL)shouldSnapshot;
- (void)setupContextsIfNecessary;
- (void)tearDownContextsIfNecessary;
- (void)checkIfSnapshotNotFiredForALongTime;
- (void)scheduleSnapshotIfNecessary;
- (void)submitSnapshotScheduleEventWithResult:(long long)a0 error:(id)a1 lastScheduledTime:(id)a2;
- (void)submitMiniSnapshot;
- (void)reallyPerformSnapshotAndFlushWithCompletionHandler:(id /* block */)a0;
- (void)snapshotDevice;
- (void)snapshotModernAccount:(id)a0 reportedDataToDevice:(id)a1 reportedDataFromFolderToDevice:(id)a2 reportedDataFromNoteToDevice:(id)a3;
- (void)snapshotHTMLAccount:(id)a0 reportedDataToDevice:(id)a1 reportedDataFromFolderToDevice:(id)a2 reportedDataFromNoteToDevice:(id)a3;
- (void)snapshotModernFolder:(id)a0 reportedDataToParentFolder:(id)a1 reportedDataToAccount:(id)a2 reportedDataToDevice:(id)a3 reportedDataFromNotesToAccount:(id)a4 reportedDataFromAttachmentToAccount:(id)a5 reportedDataFromNoteToDevice:(id)a6;
- (void)snapshotHTMLFolder:(id)a0 reportedDataToAccount:(id)a1 reportedDataToDevice:(id)a2 noteReportToAccount:(id)a3 reportedDataFromNoteToDevice:(id)a4;
- (void)snapshotModernNote:(id)a0 reportedDataToAccount:(id)a1 reportToDevice:(id)a2 reportedDataFromAttachmentToAccount:(id)a3;
- (void)snapshotHTMLNote:(id)a0 reportedDataToAccount:(id)a1 reportedDataToDevice:(id)a2;
- (void)snapshotAttachment:(id)a0 reportedDataToNote:(id)a1 reportedDataToAccount:(id)a2;
- (id)deviceSnapshotSummaryForDataType:(Class)a0;
- (id)userSnapshotSummaryForDataType:(Class)a0;
- (unsigned long long)pageCountForDocScanAttachment:(id)a0;
- (id)drawingSnapshotItemDataForDrawingAttachment:(id)a0;
- (id)tableSnapshotItemDataForTableAttachment:(id)a0;
- (id)snapshotItemDataForModernAccount:(id)a0;
- (id)snapshotItemDataForHTMLAccount:(id)a0;
- (id)accountPurposeForModernAccount:(id)a0;
- (id)accountPurposeForHTMLAccount;
- (void)performBlockForHTMLManagedObjectContext:(id /* block */)a0;
- (void)performBlockForModernManagedObjectContext:(id /* block */)a0;
- (double)timeStampOfDate:(id)a0;
- (id)lastSnapshotScheduleTimeStamp;
- (id)lastSnapshotRunningTimeStamp;
- (BOOL)shouldRunSnapshotManually;
- (BOOL)shouldScheduleSnapshot;
- (id)sortedFoldersForAccount:(id)a0;

@end
