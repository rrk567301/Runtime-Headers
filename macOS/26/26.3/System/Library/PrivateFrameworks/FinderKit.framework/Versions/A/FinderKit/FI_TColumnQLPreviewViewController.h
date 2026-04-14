@interface FI_TColumnQLPreviewViewController : FI_TPropertyQLPreviewViewController

@property (nonatomic, getter=isApplicableToUI) BOOL applicableToUI;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void)initCommon;
- (void)dealloc;
- (BOOL)shouldBeVisible;
- (void)configureView;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)qlPreviewView;

@end
