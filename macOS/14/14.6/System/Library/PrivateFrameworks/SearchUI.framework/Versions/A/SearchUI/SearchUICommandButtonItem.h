@class NSColor, SFButtonItem;

@interface SearchUICommandButtonItem : SFCommandButtonItem

@property (retain, nonatomic) SFButtonItem *sfButtonItem;
@property (retain, nonatomic) NSColor *tintColor;
@property BOOL isOverflowButton;
@property (nonatomic) unsigned long long status;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)image;
- (id)title;
- (id)command;
- (id)offStateImage;
- (id)onStateImage;
- (BOOL)hasState;
- (id)offStateCommand;
- (id)initWithSFButtonItem:(id)a0;
- (id)offStateSymbolName;
- (id)offStateTitle;
- (id)onStateCommand;
- (id)onStateSymbolName;
- (id)onStateTitle;
- (id)symbolImageWithSymbolName:(id)a0;

@end
