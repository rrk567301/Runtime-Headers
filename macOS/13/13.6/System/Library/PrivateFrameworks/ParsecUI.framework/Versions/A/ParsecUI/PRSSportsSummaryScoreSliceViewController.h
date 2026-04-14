@class PRSSportsSummaryScoreCardSection;

@interface PRSSportsSummaryScoreSliceViewController : PRSCardSectionSliceViewController

@property (retain, nonatomic) PRSSportsSummaryScoreCardSection *sportsSummaryScoreCardSection;

- (double)height;
- (void)awakeFromNib;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (id)initWithSportsSummaryScoreCardSection:(id)a0;
- (id)sportsSummaryScoreSliceView;
- (void)syncAttributes;

@end
