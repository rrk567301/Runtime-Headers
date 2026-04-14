@class PRSRichTitleCardSection;

@interface PRSTemplateACEHeaderSliceViewController : PRSCardSectionSliceViewController

@property (retain, nonatomic) PRSRichTitleCardSection *richTitleCardSection;

- (double)height;
- (void)awakeFromNib;
- (id)customViewImage;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (id)initWithRichTitleCardSection:(id)a0;
- (id)richTitleSliceView;
- (void)syncAttributes;

@end
