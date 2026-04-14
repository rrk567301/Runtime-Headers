@class PRSTrailersCardSection;

@interface PRSTrailersSliceViewController : PRSCardSectionSliceViewController <PRSSliceViewControllerDelegate>

@property (retain, nonatomic) PRSTrailersCardSection *trailersCardSection;

- (id)init;
- (double)height;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (id)titleTextField;
- (void)viewDidLoad;
- (void)_sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (id)initWithTrailersCardSection:(id)a0;
- (unsigned long long)maximumNumberOfTrailers;
- (void)openTrailer:(id)a0;
- (void)syncAttributes;
- (double)syncImageView:(id)a0 textField:(id)a1 index:(unsigned long long)a2;
- (id)trailerImageViewAtIndex:(unsigned long long)a0;
- (id)trailerImageViewHeightConstraint;
- (id)trailerTextFieldAtIndex:(unsigned long long)a0;
- (id)trailersSliceView;

@end
