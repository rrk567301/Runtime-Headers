@class SFButtonItem;
@protocol SearchUIToggleButtonItemProtocol;

@interface SearchUIToggleButtonItem : SearchUIButtonItem

@property (retain, nonatomic) SFButtonItem<SearchUIToggleButtonItemProtocol> *sfButtonItem;

- (id)offStateImage;
- (id)onStateImage;
- (id)toggledTitle;
- (id)untoggledTitle;
- (void)buttonPressed;
- (char)allowsContextMenu;
- (id)offStateTitle;
- (id)onStateTitle;

@end
