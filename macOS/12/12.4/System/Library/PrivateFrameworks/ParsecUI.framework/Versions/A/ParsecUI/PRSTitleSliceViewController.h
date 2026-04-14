@class NSTextField, PRSTitleCardSection, PRSTitleSliceView;

@interface PRSTitleSliceViewController : PRSCardSectionSliceViewController

@property (readonly) PRSTitleSliceView *titleSliceView;
@property (readonly) NSTextField *titleTextField;
@property (readonly) NSTextField *subtitleTextField;
@property BOOL useSmallerTitleFont;
@property (retain, nonatomic) PRSTitleCardSection *titleCardSection;

- (double)height;
- (void)awakeFromNib;
- (id)initWithTitleCardSection:(id)a0;
- (void)setSmallerTitleTexField;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;

@end
