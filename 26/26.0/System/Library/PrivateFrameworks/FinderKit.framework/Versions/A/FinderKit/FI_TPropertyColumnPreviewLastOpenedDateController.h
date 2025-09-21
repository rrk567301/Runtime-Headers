@interface FI_TPropertyColumnPreviewLastOpenedDateController : FI_TPropertyColumnPreviewDateTextFieldController

@property (nonatomic) BOOL alwaysShow;

- (BOOL)shouldBeVisible;
- (BOOL)hasValue;
- (void)initCommon;
- (BOOL)shouldFetchWhenDisabled;

@end
