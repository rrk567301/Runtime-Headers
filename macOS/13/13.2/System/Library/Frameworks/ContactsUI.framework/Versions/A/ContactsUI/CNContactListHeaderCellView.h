@class NSView, NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain, nonatomic) NSView *separatorView;
@property (retain) NSArray *customConstraints;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateConstraints;
- (id)views;
- (id)metrics;
- (void)setHeader:(id)a0;

@end
