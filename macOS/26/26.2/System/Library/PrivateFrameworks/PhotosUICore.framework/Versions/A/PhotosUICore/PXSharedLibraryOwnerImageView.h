@class NSView, NSImageView, NSBox;
@protocol PXSharedLibraryParticipant;

@interface PXSharedLibraryOwnerImageView : NSView {
    id<PXSharedLibraryParticipant> _owner;
    NSImageView *_badgeImageView;
    NSView *_avatarContainer;
    NSBox *_badgeBox;
    double _badgeInset;
}

@property (readonly, nonatomic) NSImageView *avatarImageView;

- (void)viewDidMoveToWindow;
- (void)layout;
- (void).cxx_destruct;
- (void)_updateAvatarImageIfNeeded;
- (id)initWithOwner:(id)a0 controlSize:(unsigned long long)a1;

@end
