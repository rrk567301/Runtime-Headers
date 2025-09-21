@class SFButtonItem;
@protocol SearchUIButtonItemDelegate;

@interface SearchUIButtonItem : SFCommandButtonItem

@property (retain, nonatomic) SFButtonItem *sfButtonItem;
@property BOOL isOverflowButton;
@property BOOL showsMenuAsPrimaryAction;
@property BOOL useDefaultSymbolFillStyle;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<SearchUIButtonItemDelegate> delegate;

- (id)command;
- (void)buttonPressed;
- (id)image;
- (id)title;
- (id)buttonAppearance;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)offStateImage;
- (id)onStateImage;
- (id)offStateCommand;
- (BOOL)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)defaultSymbolNameForCommand;
- (id)fallbackImage;
- (id)initWithSFButtonItem:(id)a0;
- (id)offStateSymbolName;
- (id)offStateTitle;
- (id)onStateCommand;
- (id)onStateSymbolName;
- (id)onStateTitle;
- (id)previewMenu;
- (Class)searchUI_viewControllerClass;
- (id)stateSymbolTransition;

@end
