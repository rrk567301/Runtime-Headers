@class NSString;
@protocol AnnotatedBookmarksSidebarTableCellViewDelegate;

@interface AnnotatedBookmarksSidebarTableCellView : NSTableCellView <NSControlTextEditingDelegate>

@property (weak, nonatomic) id<AnnotatedBookmarksSidebarTableCellViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (BOOL)accessibilityPerformShowMenu;
- (void)controlTextDidEndEditing:(id)a0;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;

@end
