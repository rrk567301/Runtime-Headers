@class PXSharedLibraryOwnerImageView;
@protocol PXSharedLibrary;

@interface PXSharedLibraryInvitationView : UXView {
    PXSharedLibraryOwnerImageView *_ownerImageView;
}

@property (readonly, nonatomic) id<PXSharedLibrary> invitation;

- (void).cxx_destruct;
- (id)_createTitleTextField;
- (void)_viewInvitationAction:(id)a0;
- (id)_createSubtitleTextFieldWithOwnerName:(id)a0;
- (id)_createViewInvitationButton;
- (id)initWithInvitation:(id)a0;

@end
