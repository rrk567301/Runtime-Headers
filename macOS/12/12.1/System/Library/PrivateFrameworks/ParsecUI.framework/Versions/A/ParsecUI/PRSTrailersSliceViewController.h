@class PRSTrailersCardSection;

@interface PRSTrailersSliceViewController : PRSCardSectionSliceViewController <PRSSliceViewControllerDelegate>

@property (retain, nonatomic) PRSTrailersCardSection *trailersCardSection;

- (id)init;
- (double)height;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (id)titleTextField;
- (id)initWithTrailersCardSection:(id)a0;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)trailerImageViewAtIndex:(unsigned long long)a0;
- (unsigned long long)maximumNumberOfTrailers;
- (id)trailerTextFieldAtIndex:(unsigned long long)a0;
- (void)_sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (id)trailerImageViewHeightConstraint;
- (id)trailersSliceView;
- (void)openTrailer:(id)a0;
- (double)syncImageView:(id)a0 textField:(id)a1 index:(unsigned long long)a2;

@end
