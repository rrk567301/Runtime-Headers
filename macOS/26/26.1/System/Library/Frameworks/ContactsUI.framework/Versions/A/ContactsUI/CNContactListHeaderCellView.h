@class NSView, NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain, nonatomic) NSView *separatorView;
@property (retain) NSArray *customConstraints;

- (id)metrics;
- (void)setHeader:(id)a0;
- (void)updateConstraints;
- (id)views;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
