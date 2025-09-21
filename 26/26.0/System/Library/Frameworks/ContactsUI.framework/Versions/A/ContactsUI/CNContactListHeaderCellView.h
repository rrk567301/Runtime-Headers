@class NSView, NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain, nonatomic) NSView *separatorView;
@property (retain) NSArray *customConstraints;

- (void)setHeader:(id)a0;
- (id)views;
- (id)metrics;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
