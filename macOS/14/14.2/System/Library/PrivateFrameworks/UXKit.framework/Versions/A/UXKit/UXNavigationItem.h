@class NSTextField, NSArray, NSString, NSView, UXBarButtonItem, NSToolbarItemGroup;

@interface UXNavigationItem : NSObject {
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSTextField *_internalTitleView;
}

@property (class, readonly, nonatomic) NSArray *keyPathsToObserve;

@property (readonly, nonatomic) NSTextField *internalTitleView;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSView *condensedTitleView;
@property (retain, nonatomic) UXBarButtonItem *switchLibraryButtonItem;
@property (retain, nonatomic) NSToolbarItemGroup *centerToolbarItemGroup;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UXBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) NSView *titleView;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL hidesAlternateTitleView;
@property (nonatomic) BOOL hidesGlobalTrailingView;
@property (retain, nonatomic) NSArray *leftBarButtonItems;
@property (retain, nonatomic) NSArray *rightBarButtonItems;
@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (retain, nonatomic) UXBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UXBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) NSArray *leadingBarButtonItems;
@property (retain, nonatomic) NSArray *trailingBarButtonItems;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)_updateInternalTitleView;
- (void)setLeadingBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setTrailingBarButtonItems:(id)a0 animated:(BOOL)a1;

@end
