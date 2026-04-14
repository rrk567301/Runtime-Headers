@class CNAvatarViewController, NSImage;

@interface CNLikenessFullCollectionItem : CNLikenessCollectionItem

@property (retain) CNAvatarViewController *avatarViewController;
@property (retain) NSImage *selectionImage;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)contentView;
- (void)loadView;
- (void)rightMouseDown:(id)a0;
- (void)delete:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)selectionBackgroundImage;
- (void)_updateEditabilityForSelectedState:(BOOL)a0;
- (void)_setLikeness:(id)a0;

@end
