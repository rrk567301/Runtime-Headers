@class NSTextField, NSArray, NSView, NSString, UXBarButtonItem, NSStackView, NSToolbarItemGroup;

@interface UXNavigationItem : NSObject {
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSStackView *_internalTitleView;
}

@property (class, readonly, nonatomic) NSArray *keyPathsToObserve;

@property (readonly, nonatomic) NSView *internalTitleView;
@property (readonly, nonatomic) NSTextField *internalTitleLabel;
@property (readonly, nonatomic) NSTextField *internalSubtitleLabel;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSView *condensedTitleView;
@property (retain, nonatomic) UXBarButtonItem *progressButtonItem;
@property (retain, nonatomic) UXBarButtonItem *switchLibraryButtonItem;
@property (retain, nonatomic) NSToolbarItemGroup *centerToolbarItemGroup;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) BOOL useWindowForTitleOutput;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSView *titleView;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UXBarButtonItem *backBarButtonItem;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL hidesSidebarToggleButton;
@property (nonatomic) BOOL hidesAlternateTitleView;
@property (nonatomic) BOOL hidesGlobalTrailingView;
@property (retain, nonatomic) NSArray *leftBarButtonItems;
@property (retain, nonatomic) NSArray *rightBarButtonItems;
@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (retain, nonatomic) UXBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UXBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) NSArray *leadingBarButtonItems;
@property (retain, nonatomic) NSArray *trailingBarButtonItems;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)_updateInternalTitleView;
- (void)setLeadingBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setTrailingBarButtonItems:(id)a0 animated:(BOOL)a1;

@end
