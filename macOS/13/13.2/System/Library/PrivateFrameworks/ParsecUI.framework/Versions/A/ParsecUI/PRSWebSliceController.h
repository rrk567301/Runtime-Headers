@class NSImageView, NSArray, NSTextField, NSLayoutConstraint;

@interface PRSWebSliceController : PRSCardSectionSliceViewController

@property (retain) NSArray *siteIconConstraints;
@property (retain) NSLayoutConstraint *siteNameBaseToBottom;
@property (weak) NSImageView *siteIcon;
@property (weak) NSTextField *siteName;
@property (weak) NSTextField *siteDomain;
@property (weak) NSLayoutConstraint *siteDomainBaseToSiteNameBase;
@property (weak) NSLayoutConstraint *siteDomainBaseToBottomConstraint;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (double)height;
- (void)awakeFromNib;
- (id)initWithCardSection:(id)a0;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (void)setupForObject:(id)a0;
- (void)setViewWidth:(double)a0;
- (void)_setConstraintsForSiteIconOfSize:(struct CGSize { double x0; double x1; })a0;

@end
