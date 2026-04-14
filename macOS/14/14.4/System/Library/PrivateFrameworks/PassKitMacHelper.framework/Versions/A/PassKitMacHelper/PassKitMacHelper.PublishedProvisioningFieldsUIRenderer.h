@interface PassKitMacHelper.PublishedProvisioningFieldsUIRenderer : _TtCs12_SwiftObject <PKProvisioningFieldsUIRenderer> {
    void /* unknown type, empty encoding */ _fieldsModel;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ _currentStep;
    void /* unknown type, empty encoding */ _isLoading;
    void /* unknown type, empty encoding */ navController;
}

- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (void)popViewControllerWithAnimated:(BOOL)a0;
- (void)pushWithViewController:(id)a0;
- (void)showWithProvisioningError:(id)a0;

@end
