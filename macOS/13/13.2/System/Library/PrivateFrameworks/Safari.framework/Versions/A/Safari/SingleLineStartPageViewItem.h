@class NSView;
@protocol SingleLineStartPageViewItemDelegate;

@interface SingleLineStartPageViewItem : StartPageViewItem {
    NSView *_cardView;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id<SingleLineStartPageViewItemDelegate> delegate;
@property (nonatomic) long long section;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (void)rightMouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;

@end
