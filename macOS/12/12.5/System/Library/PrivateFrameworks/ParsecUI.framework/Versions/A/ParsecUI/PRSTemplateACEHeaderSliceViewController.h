@class PRSRichTitleCardSection;

@interface PRSTemplateACEHeaderSliceViewController : PRSCardSectionSliceViewController

@property (retain, nonatomic) PRSRichTitleCardSection *richTitleCardSection;

- (double)height;
- (void)awakeFromNib;
- (id)initWithRichTitleCardSection:(id)a0;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)richTitleSliceView;
- (id)customViewImage;

@end
