@class NSAttributedString;

@interface ViewSpyInfoAttributedItem : ViewSpyInfoItem

@property (retain, nonatomic) NSAttributedString *styledText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)itemType;
- (id)initWithCoder:(id)a0;
- (void)updateFrom:(id)a0;

@end
