@protocol PXSharedLibrary;

@interface PXSharedLibraryDeclineInvitationActionPerformer : PXActionPerformer

@property (retain, nonatomic) id<PXSharedLibrary> invitation;

- (void).cxx_destruct;
- (id)init;
- (void)performUserInteractionTask;
- (void)performActionWithInvitation:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;

@end
