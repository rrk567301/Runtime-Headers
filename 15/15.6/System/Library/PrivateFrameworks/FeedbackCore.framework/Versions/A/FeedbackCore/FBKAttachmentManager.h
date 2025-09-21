@class NSString, NSArray, FBKGroupedDevice, FBKDECollector, FBKFileCollector, NSSet;
@protocol FBKAttachmentManagerDelegate;

@interface FBKAttachmentManager : NSObject <FBKAttachmentListenerDelegate>

@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) FBKGroupedDevice *targetDevice;
@property (retain, nonatomic) FBKDECollector *deCollector;
@property (retain, nonatomic) FBKFileCollector *fileCollector;
@property (weak, nonatomic) id<FBKAttachmentManagerDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) char autoGathersDiagnosticExtensions;
@property (retain, nonatomic) NSSet *pendingRequirements;

- (void).cxx_destruct;
- (void)removeAllAttachments;
- (char)hasFilePromises;
- (void)abortAllSessions;
- (void)gatherAttachment:(id)a0 answers:(id)a1;
- (char)hasUnmetRequirementAttachments;
- (void)addAttachmentWithItemProvider:(id)a0;
- (void)addFileFrom:(id)a0 byMoving:(char)a1;
- (id)attachmentForIndexPath:(id)a0;
- (long long)attachmentIndex:(id)a0;
- (void)attachmentProvider:(id)a0 didAddAttachment:(id)a1;
- (void)attachmentProvider:(id)a0 didFinishAttaching:(id)a1 error:(id)a2;
- (void)attachmentProvider:(id)a0 didFinishLoadingWithAttachments:(id)a1 error:(id)a2;
- (void)attachmentProvider:(id)a0 didRemoveAttachment:(id)a1;
- (void)attachmentProvider:(id)a0 didStartAttaching:(id)a1;
- (void)attachmentProvider:(id)a0 didTakeAttachment:(id)a1 fromOtherProvider:(id)a2;
- (void)attachmentProvider:(id)a0 didUpdateAttachment:(id)a1;
- (char)canCancelAttachmentCollection:(id)a0;
- (char)canDeleteAttachment:(id)a0;
- (void)gatherFilesWithDedExtension:(id)a0 answers:(id)a1;
- (id)initWithMatcherPredicates:(id)a0 pendingFileUrls:(id)a1 pendingExtensions:(id)a2 form:(id)a3 targetDevice:(id)a4 shouldGetSessionStatus:(char)a5 shouldCheckDeferredLogs:(char)a6 attachmentDescriptors:(id)a7 autoGathersDiagnosticExtensions:(char)a8;
- (char)isAttachmentParent:(id)a0;
- (id)popPendingRequirements;
- (void)postLaunchAttachLocalFiles:(id)a0 allRequirements:(id)a1;
- (void)updateRequirements:(id)a0;

@end
