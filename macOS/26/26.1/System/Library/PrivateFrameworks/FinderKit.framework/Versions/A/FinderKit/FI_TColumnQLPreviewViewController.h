@interface FI_TColumnQLPreviewViewController : FI_TPropertyQLPreviewViewController

@property (nonatomic, getter=isApplicableToUI) BOOL applicableToUI;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void)initCommon;
- (BOOL)shouldBeVisible;
- (void)dealloc;
- (void)configureView;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)qlPreviewView;

@end
