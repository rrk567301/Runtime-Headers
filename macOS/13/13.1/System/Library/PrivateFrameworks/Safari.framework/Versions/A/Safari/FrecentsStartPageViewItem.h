@class NSImageView, NSString, NSImage, NSTextField, NSView;
@protocol FrecentsStartPageViewItemDelegate;

@interface FrecentsStartPageViewItem : NSCollectionViewItem <DraggableStartPageViewItem> {
    NSImageView *_thumbnailView;
    NSImageView *_overlay;
    NSTextField *_thumbnailLabel;
    NSView *_boxShadow;
    BOOL _didBeginDrag;
}

@property (copy, nonatomic) NSString *thumbnailText;
@property (retain, nonatomic) NSImage *thumbnailImage;
@property (weak, nonatomic) id<FrecentsStartPageViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (void)rightMouseDown:(id)a0;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)willBeginDragSession;
- (void)willEndDragSession;
- (void)_removeOverlay;

@end
