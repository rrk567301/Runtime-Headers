@class NSView;
@protocol StartPageViewItemDelegate;

@interface SingleLineStartPageViewItem : StartPageViewItem {
    NSView *_cardView;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id<StartPageViewItemDelegate> delegate;
@property (nonatomic) long long section;

- (id)accessibilityLabel;
- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)setRepresentedObject:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)accessibilityPerformShowMenu;

@end
