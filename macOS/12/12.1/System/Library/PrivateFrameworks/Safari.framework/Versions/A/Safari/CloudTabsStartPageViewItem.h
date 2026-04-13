@class NSView;
@protocol CloudTabsStartPageViewItemDelegate;

@interface CloudTabsStartPageViewItem : StartPageViewItem {
    NSView *_cardView;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id<CloudTabsStartPageViewItemDelegate> delegate;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (void)rightMouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;

@end
