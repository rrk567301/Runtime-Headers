@class SFButtonItem;
@protocol SearchUIButtonItemDelegate;

@interface SearchUIButtonItem : SFCommandButtonItem

@property (retain, nonatomic) SFButtonItem *sfButtonItem;
@property char isOverflowButton;
@property char showsMenuAsPrimaryAction;
@property char useDefaultSymbolFillStyle;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<SearchUIButtonItemDelegate> delegate;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)image;
- (id)title;
- (id)command;
- (id)offStateImage;
- (id)onStateImage;
- (id)buttonAppearance;
- (void)buttonPressed;
- (id)offStateCommand;
- (char)allowsContextMenu;
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

@end
