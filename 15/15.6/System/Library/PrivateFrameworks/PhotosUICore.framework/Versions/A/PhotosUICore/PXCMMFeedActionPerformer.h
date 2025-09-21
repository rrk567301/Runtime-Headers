@class NSString, PXCMMStatusController;
@protocol PXCMMFeedActionPerformerDelegate;

@interface PXCMMFeedActionPerformer : NSObject <PXCMMFooterViewModelDelegate, PXFeedActionPerformer> {
    PXCMMStatusController *_statusController;
}

@property (weak, nonatomic) id<PXCMMFeedActionPerformerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextMenuForInvitations:(id)a0 presentationEnvironment:(id)a1;
- (id)contextMenuForSelection:(id)a0 presentationEnvironment:(id)a1;
- (void)deleteItemsInSelection:(id)a0 undoManager:(id)a1;
- (char)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 fromViewController:(id)a2;
- (char)navigateToObjectReference:(id)a0 originalSource:(id)a1 fromViewController:(id)a2 animated:(char)a3 willPresentHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)presentationEnvironmentForCMMFooterViewModel:(id)a0;
- (id)viewControllerForNavigationToInvitation:(id)a0;
- (id)viewControllerForNavigationToInvitationWithIdentifier:(id)a0 inDataSource:(id)a1;

@end
