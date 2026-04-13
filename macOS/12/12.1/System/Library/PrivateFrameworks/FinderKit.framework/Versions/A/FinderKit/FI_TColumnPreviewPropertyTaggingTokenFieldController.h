@class NSString;

@interface FI_TColumnPreviewPropertyTaggingTokenFieldController : FI_TPropertyTaggingTokenFieldController

@property (readonly, nonatomic) NSString *previewOptionKey;
@property (nonatomic, getter=isUserDisabled) BOOL userDisabled;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void).cxx_destruct;
- (void)initCommon;
- (void)configureView;
- (BOOL)shouldBeVisible;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)visibleWhileLoadingAsync;
- (void)updateDisabledStateForKeys:(id)a0;

@end
