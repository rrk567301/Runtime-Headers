@class NSColor, SFButtonItem;

@interface SearchUICommandButtonItem : SFCommandButtonItem

@property (retain, nonatomic) SFButtonItem *sfButtonItem;
@property (retain, nonatomic) NSColor *tintColor;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSFButtonItem:(id)a0;

@end
