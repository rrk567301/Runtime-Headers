@class SFButtonItem;
@protocol SearchUIToggleButtonItemProtocol;

@interface SearchUIToggleButtonItem : SearchUIButtonItem

@property (retain, nonatomic) SFButtonItem<SearchUIToggleButtonItemProtocol> *sfButtonItem;

- (void)buttonPressed;
- (id)offStateImage;
- (id)onStateImage;
- (id)toggledTitle;
- (id)untoggledTitle;
- (BOOL)allowsContextMenu;
- (id)offStateTitle;
- (id)onStateTitle;

@end
