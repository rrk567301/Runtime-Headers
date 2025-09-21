@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitAcceptMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (char)canPerformActionWithSession:(id)a0;
- (void)performBackgroundTask;

@end
