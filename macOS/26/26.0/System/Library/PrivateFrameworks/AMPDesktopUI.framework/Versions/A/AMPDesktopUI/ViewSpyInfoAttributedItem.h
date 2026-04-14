@class NSAttributedString;

@interface ViewSpyInfoAttributedItem : ViewSpyInfoItem

@property (retain, nonatomic) NSAttributedString *styledText;

- (void)encodeWithCoder:(id)a0;
- (long long)itemType;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateFrom:(id)a0;

@end
