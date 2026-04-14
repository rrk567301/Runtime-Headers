@class NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSTableCellView

@property (retain) NSTextField *headerTextField;
@property (retain) NSArray *customConstraints;

- (void).cxx_destruct;
- (id)views;
- (void)awakeFromNib;
- (void)updateConstraints;
- (id)metrics;
- (void)setHeader:(id)a0;

@end
