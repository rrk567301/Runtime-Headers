@class SWAttributionView;

@interface FI_TPropertySharedFromController : FI_IPropertyValueController

@property (retain, nonatomic) SWAttributionView *attributionView;

- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)initCommon;
- (BOOL)shouldBeVisible;

@end
