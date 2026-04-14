@class SFButtonItem;
@protocol SearchUIToggleButtonItemProtocol;

@interface SearchUIToggleButtonItem : SearchUICommandButtonItem

@property (retain, nonatomic) SFButtonItem<SearchUIToggleButtonItemProtocol> *sfButtonItem;

- (id)offStateImage;
- (id)onStateImage;
- (id)offStateTitle;
- (id)onStateTitle;

@end
