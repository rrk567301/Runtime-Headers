@interface FI_TPropertyColumnPreviewLastOpenedDateController : FI_TPropertyColumnPreviewDateTextFieldController

@property (nonatomic) BOOL alwaysShow;

- (void)initCommon;
- (BOOL)hasValue;
- (BOOL)shouldBeVisible;
- (BOOL)shouldFetchWhenDisabled;

@end
