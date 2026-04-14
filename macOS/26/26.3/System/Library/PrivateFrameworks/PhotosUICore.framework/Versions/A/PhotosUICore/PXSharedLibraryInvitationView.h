@class PXSharedLibraryStatusProvider;
@protocol PXSharedLibrary;

@interface PXSharedLibraryInvitationView : UXView

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;

- (void).cxx_destruct;
- (id)_createTitleTextField;
- (id)_createSubtitleTextFieldWithOwnerName:(id)a0;
- (id)_createViewInvitationButton;
- (void)_viewInvitationAction:(id)a0;
- (id)initWithSharedLibraryStatusProvider:(id)a0 invitation:(id)a1 padding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
