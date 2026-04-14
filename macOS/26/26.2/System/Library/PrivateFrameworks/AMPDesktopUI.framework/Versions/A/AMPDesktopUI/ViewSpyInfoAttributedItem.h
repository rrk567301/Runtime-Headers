@class NSAttributedString;

@interface ViewSpyInfoAttributedItem : ViewSpyInfoItem

@property (retain, nonatomic) NSAttributedString *styledText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)itemType;
- (void)updateFrom:(id)a0;

@end
