@class PRSSportsSummaryScoreCardSection;

@interface PRSSportsSummaryScoreSliceViewController : PRSCardSectionSliceViewController

@property (retain, nonatomic) PRSSportsSummaryScoreCardSection *sportsSummaryScoreCardSection;

- (double)height;
- (void)awakeFromNib;
- (id)initWithSportsSummaryScoreCardSection:(id)a0;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)sportsSummaryScoreSliceView;

@end
