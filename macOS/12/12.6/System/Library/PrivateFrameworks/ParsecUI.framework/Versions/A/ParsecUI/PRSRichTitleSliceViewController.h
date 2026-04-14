@class PRSRichTitleCardSection;

@interface PRSRichTitleSliceViewController : PRSCardSectionSliceViewController

@property BOOL isItemPurchased;
@property (retain, nonatomic) PRSRichTitleCardSection *richTitleCardSection;
@property (nonatomic) BOOL hasBottomRightAlignedPlayButton;

- (double)height;
- (void)awakeFromNib;
- (id)initWithRichTitleCardSection:(id)a0;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)richTitleSliceView;
- (void)startPlayingContent:(id)a0;

@end
