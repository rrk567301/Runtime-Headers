@class NSTextField, PRSAppLinkSliceView;

@interface PRSAppLinkController : PRSCardSectionSliceViewController

@property (readonly) PRSAppLinkSliceView *appLinkSliceView;
@property (readonly) NSTextField *headerText;

- (void)setRepresentedObject:(id)a0;
- (double)height;
- (void)awakeFromNib;
- (id)initWithCardSection:(id)a0;
- (void)setupForObject:(id)a0;

@end
