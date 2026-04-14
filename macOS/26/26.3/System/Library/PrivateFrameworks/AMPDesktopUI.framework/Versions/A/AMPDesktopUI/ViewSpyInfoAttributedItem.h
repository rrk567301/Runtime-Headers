@class NSAttributedString;

@interface ViewSpyInfoAttributedItem : ViewSpyInfoItem

@property (retain, nonatomic) NSAttributedString *styledText;

- (long long)itemType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateFrom:(id)a0;

@end
