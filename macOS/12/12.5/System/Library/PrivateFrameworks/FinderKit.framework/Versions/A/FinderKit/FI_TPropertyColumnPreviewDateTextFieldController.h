@class NSString;

@interface FI_TPropertyColumnPreviewDateTextFieldController : FI_TPropertyDateTextFieldController

@property (readonly, nonatomic) NSString *previewOptionKey;
@property (nonatomic, getter=isUserDisabled) BOOL userDisabled;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void).cxx_destruct;
- (BOOL)shouldBeVisible;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })syncCountThreshold;
- (BOOL)visibleWhileLoadingAsync;
- (BOOL)shouldFetchWhenDisabled;
- (void)updateDisabledStateForKeys:(id)a0;

@end
