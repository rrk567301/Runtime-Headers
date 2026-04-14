@class NSView, NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain, nonatomic) NSView *separatorView;
@property (retain) NSArray *customConstraints;

- (id)metrics;
- (void)setHeader:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)views;
- (void)awakeFromNib;

@end
