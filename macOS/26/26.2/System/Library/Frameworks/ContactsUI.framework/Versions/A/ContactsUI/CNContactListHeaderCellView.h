@class NSView, NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain, nonatomic) NSView *separatorView;
@property (retain) NSArray *customConstraints;

- (void)setHeader:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)views;
- (void)awakeFromNib;

@end
