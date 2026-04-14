@class NSString, PXCMMFeedActionPerformer, PXCMMInvitationSpec;

@interface PXCMMFeedItemLayoutFactory : NSObject <PXFeedItemLayoutFactory> {
    PXCMMFeedActionPerformer *_actionPerformer;
    PXCMMInvitationSpec *_invitationSpec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_configureLayout:(id)a0 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDataSource:(id)a2;
- (void)configureItemLayout:(id)a0 forChangedItemFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDataSource:(id)a2 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 inDataSource:(id)a4;
- (id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 viewModel:(id)a2 initialReferenceSize:(struct CGSize { double x0; double x1; })a3 thumbnailAsset:(out id *)a4;
- (unsigned int)decorationOverlayAnchorSpriteIndexForItemLayout:(id)a0;
- (id)initWithActionPerformer:(id)a0 invitationSpec:(id)a1;

@end
