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

- (id)accessibilityLabel;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)prepareForReuse;
- (void)rightMouseDown:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (void)_removeOverlay;
- (void)willBeginDragSession;
- (void)willEndDragSession;

@end
