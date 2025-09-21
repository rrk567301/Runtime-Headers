@class NSImageView, NSString, NSImage, NSView, NSTextField;
@protocol StartPageBackgroundImageIdentifierProvider, FrecentsStartPageViewItemDelegate;

@interface FrecentsStartPageViewItem : NSCollectionViewItem <DraggableStartPageViewItem> {
    NSImageView *_thumbnailView;
    NSImageView *_overlay;
    NSTextField *_thumbnailLabel;
    BOOL _didBeginDrag;
}

@property (copy, nonatomic) NSString *thumbnailText;
@property (retain, nonatomic) NSImage *thumbnailImage;
@property (readonly, nonatomic) NSView *boxShadow;
@property (weak, nonatomic) id<FrecentsStartPageViewItemDelegate> delegate;
@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)accessibilityRole;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (void)_removeOverlay;
- (void)willBeginDragSession;
- (void)willEndDragSession;

@end
